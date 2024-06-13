---
data: 2024-04-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Libreria Standard per Directory
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Funzione di libreria per elencare directory.*
- - -
# 1. Funzioni di Libreria per Directory
## 1.1. Listare File con Funzione di Libreria
Per listare il *contenuto di una cartella*, si usano le funzioni di libreria ^30c6f3
```c
#include <sys/types.h> // per definire tutti i tipi derivati
#include <dirent.h> // per dirent
DIR * opendir(const char *name);
struct dirent *readdir(DIR *dirp);
// faccio quello che voglio
int closedir(DIR *dirp);
```
Funzionano **solo** su sistemi POSIX.
Su Windows si usano `FindFirstFile()` e `FindNextFile().`

1. **Apertura:** una cartella, prima di essere letta, va aperta con `opendir`.
Essa ritorna un puntatore a `DIR *` se l'apertura va a buon fine, altrimenti `NULL`
Un `DIR *` é l'equivalente di `FILE *` per le directory
```c
DIR * d;
d = opendir("/path/");
if (d!=NULL)
  ...
```

**Struttura "dirent".**
Una `struct dirent` rappresenta un elemento di una directory.
Contiene i campi:
```c
struct dirent 
{
  ino_t          d_ino;       /* inode number */
  char           d_name[256]; /* filename */
  ... // Da qui in poi è irrilevante per noi
};
```

2. **Listare il contenuto:** si usa la funzione `readdir` che ritorna **una** `struct dirent *`
- Opera in maniera sequenziale
	- A ogni invocazione ritorna l'elemento successivo
- Va invocata finche non ritorna `NULL` (ovvero ho finito tutti i file da elencare)

```c
struct dirent * entry;
while ((entry = readdir(d)) != NULL)
      printf("  %s\n", entry->d_name);
```
- L'ordine degli elementi ritornati *dipende dal FS* e di solito *non ha alcun significato*

3. **Chiusura cartelle.** Infine bisogna chiudere una cartella per rilasciare le risorse associate.
```c
int r = closedir(d);
```
Ritorna $0$ se l'operazione va a buon fine, altrimenti $-1$. Ad esempio, se provo a chiudere una cartella *più di una volta*, allora finisce male.

---
## 1.2. Funzioni di libreria per Directory: Esempio
Si scriva un programma che riceve una directory da riga di comando e ne lista il contenuto. Importante per l'esercitazione e per l'*esame*!

```c
#include <stdio.h>
#include <stdlib.h>   // Necessario per exit
#include <sys/stat.h> // Necessario per stat
#include <dirent.h>   // Necessario per struct dirent *
int main (int argc, char * argv[])
{
    struct stat buf;
    struct dirent *dirp;
    DIR *dp;

    if (argc!=2){
        printf("Specifica un path\n"); exit (1);}
    if (stat(argv[1], &buf) < 0) {
        printf ("Impossibile leggere le informazioni sul file\n"); exit (1);}
    if (!S_ISDIR(buf.st_mode)){
        printf("%s deve essere una directory\n", argv[1]); exit(1);}
    if ( (dp = opendir(argv[1])) == NULL) {
        printf("%s impossibile da aprire\n", argv[1]); exit (1);}

    while ( (dirp = readdir(dp)) != NULL)
      printf("%s\n", dirp->d_name);

    closedir(dp);

    return 0;
}
```
