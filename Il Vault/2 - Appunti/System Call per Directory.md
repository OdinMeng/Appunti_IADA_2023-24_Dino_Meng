---
data: 2024-04-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: System Call per Directory
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*System call per interagore con directory: leggere, creare e rimuovere. Cenno per listare.*
- - -
# 1. System Call per Interagire con Directory
## 1.1. System call per Directory: Leggere
1. **Lettura di informazioni su una directory o un file:**
```c
#include <sys/stat.h>
int stat(const char *restrict pathname,
                struct stat * statbuf);
```
Ritorna informazioni su `pathname`, le colloca nella struttura puntata da `statbuf`
- Passaggio di variable per riferimento che é di fatto un valore di ritorno
- Ritorna $0$ in caso di successo, $-1$ in caso di errore
- La struttura `statbuf` contiene i *metadati* dell'inode

**Definizione.** (*struct stat*)
La `struct stat` ritornata contiene i seguenti campi:
```c
struct stat {
   dev_t     st_dev;         /* ID of device containing file */
   ino_t     st_ino;         /* Inode number */
   mode_t    st_mode;        /* File type and mode */
   nlink_t   st_nlink;       /* Number of hard links */
   uid_t     st_uid;         /* User ID of owner */
   gid_t     st_gid;         /* Group ID of owner */
   dev_t     st_rdev;        /* Device ID (if special file) */
   off_t     st_size;        /* Total size, in bytes */
   blksize_t st_blksize;     /* Block size for filesystem I/O */
   blkcnt_t  st_blocks;      /* Number of 512B blocks allocated */

   struct timespec st_atim;  /* Time of last access */
   struct timespec st_mtim;  /* Time of last modification */
   struct timespec st_ctim;  /* Time of last status change */
};
```

**Definizione.** (*mode_t*)
Il campo `mode_t` indica *se si tratta di file* (o qualsiasi altra cosa) in forma di una *bit mask*.
Si possono usare le seguenti macro per testare facilmente `mode_t`
- `S_ISREG(m)`: True se file regolare
- `S_ISDIR(m)`: True se file directory
- `S_ISLNK(m)`: True se file un Symbolic Link


---
## 1.2. System call per Directory: Esempio
Si scriva un programma che riceve un path da riga di comando e stampa se esso é file, directory o link simbolico. *Importante per l'esame!*

```c
#include <stdio.h>
#include <stdlib.h>   // Necessario per exit
#include <sys/stat.h> // Necessario per stat
int main (int argc, char * argv[])
{
    struct stat buf;
    if (argc!=2){
        printf("Specifica un path\n");
        return 1;
    }

    if (stat(argv[1], &buf) < 0) {
        printf ("Impossibile leggere le informazioni sul file\n");
        exit (1); /* Termina subito il programma con codice 1 */
    }

    if (S_ISREG(buf.st_mode))
        printf("%s: file\n", argv[1]);
    else if (S_ISDIR(buf.st_mode))
        printf("%s: directory\n", argv[1]);
    else if (S_ISLNK(buf.st_mode))
        printf("%s: link simbolico\n", argv[1]);
    else
        printf("%s: altro tipo di path\n", argv[1]);

    return 0;
}
```

---
## 1.3. System call per Directory: Creazione e Rimozione
2. **Creazione di directory**
```c
int mkdir (const char *path, mode_t mode);
```

3. **Rimozione di directory**
```c
int rmdir (const char *path);
```
- Rimuove *solo se* la cartella è vuota.

`mode` ha stesso ruolo che nella `open`
Valore di ritorno $0$ in caso di successo $-1$ in caso di errore

---
## 1.4. System call per Directory: Listare
Per *listare il contenuto di una directory* si possono usare le System Call `open` e `getdents`e la `struct linux_dirent`.
1. Si apre una directory come fosse un file
  `int fd = open("path", O_RDONLY | O_DIRECTORY);`
2. Si leggono batch di `struct linux_dirent`
  `int nread = syscall(SYS_getdents, fd, buf, BUF_SIZE);`

Tutto ciò é difficile, *poco pratico e non portabile*. Infatti, manco esiste un wrapper in C per invocarla. Per noi sarà inutile, e useremo direttamente le *funzioni di libreria*.
Si usano sempre le *funzioni di libreria POSIX* per leggere il contenuto di una cartella, come vedremo dopo ([[Libreria Standard per Directory#^30c6f3|1]]).