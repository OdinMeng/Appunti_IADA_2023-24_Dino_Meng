---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Condivisione della Memoria tra Processi
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Breve descrizione qui*
- - -
# Memoria condivisa con `mmap`

## Creazione di Memoria Condivisa
```c
#include <sys/mman.h>
void *mmap(void *addr, size_t length, int prot, int flags,
          int fd, off_t offset);
```

Crea una zona di memoria condivisa, mappandolo su un file. Comando *complesso* e *configurabile*!

Argomenti:
- `addr`: se non nullo, la memoria viene mappata a `addr` (arrotondato per difetto al *page size*)
	- Tipicamente lo si mette a `NULL`, l'indirizzo viene deciso dal *sistema operativo*.
- `length`: dimensione
- `prot`: può essere: `PROT_READ`, `PROT_WRITE`, `PROT_EXEC`, `PROT_NONE`
	- Cioè la pagina può essere letta, scritta, eseguita, non può essere acceduta
	- Normalmente `prot = PROT_READ|PROT_WRITE`
- `flags` determina come i cambiamenti sono visibili o meno ad altri processi 
	- `MAP_ANONYMOUS, MAP_SHARED, MAP_PRIVATE`
	- Normalmente si impone `flags=MAP ANONYMOUS | MAP SHARED` o `MAP SHARED`
- `fd` e `offset` sono usati per mappare la memoria su un *file* (diventerà l'identificativo globale)
	- Normalmente si impone `fd` e `0`, o `-1` e `0` in caso di anonimità.

Valore di ritorno:
- L'indirizzo virtuale del segmento mappato (andrà convertito col meccanismo di *casting*)
- $-1$ se insuccesso

## Rimozione di Memoria Condivisa
```c
int munmap(void *addr, size_t length);
```

Rimuove la mappatura e rende disponibile la memoria all'indirizzo `addr`

## Casi d'Uso della `mmap`
**Utilizzo:** ci sono tre modi per usare la `mmap`
1. Zona di memoria *anonima*: utilizzata con `fork`
    ```c
    mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS, -1, 0);
    ```
2. Zona di memoria *mappata su file*:
    ```c
    fd = open("/home/martino/file.txt", O_RDWR|O_CREATE);
    mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
    ```
3. Zona di memoria mappata *su file temporaneo*:
    ```c
    fd = shm_open("temporaneo.txt", "rw");
    mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
    ```

Adesso li vediamo in dettaglio

## Zona di Memoria Anonima
**1. Zona di memoria anonima:**
- La zona di memoria non ha un nome
- *Solo* un figlio nato con una `fork` può accedervi
- *Semplicissimo da usare*
- Praticamente è come una *pipe* bidirezionale

```c
void* shmem = mmap(NULL, size, PROT_READ | PROT_WRITE,
                   MAP_SHARED | MAP_ANONYMOUS, -1, 0);

if (fork()){ /* Padre */
    ...
} else { /* Figlio */
    ...
}
munmap(shmem, size);
```

*Nota:* Dopo la `fork`, la memoria dei processi è indipendente. Solo con `mmap` è possibile creare una zona di memoria condivisa.

## Zona di Memoria Condivisa
**2. Zona di memoria mappata su file:**
*Idea.*
- Si usa *un file* come contenitore
- Il contenuto della zona condivisa verrà salvato su file
- *Più programmi* possono accedere alla memoria condivisa
	- Il path va identificatore (diventa l'espediente)
- Efficace ma lento a causa del *disco*
- E' necessario che il file sia grande a sufficienza per contenere la regione mappata
	- Per assicurarci di questo useremo le funzioni `truncate`, `ftruncate`

```c
#include <unistd.h>
int truncate(const char *path, off_t length);
int ftruncate(int fd, off_t length);
```

Assicura che il file aperto `fd` o il file `path` si lungo almeno `length`.
- Se necessario il file è troncato
- Se necessario esteso e riempito con caratteri `'\0'` (o `0X00` in hex).

**Modello tipico.**
```c
fd = open(path, O_RDWR|O_CREATE); /* Non è una fopen()*/
ftruncate(fd, size);
void* shmem = mmap(NULL, size, PROT_READ|PROT_WRITE,
                   MAP_SHARED, fd, 0);
...
munmap(shmem, size);
```

---

**3. Zona di memoria mappata su file temporaneo**
- A volte è necessario avere un *file temporaneo identificabile* che risiede in memoria
	- Per utilizzo da parte di più programmi
- Una zona di memoria mappata *su file è inutilmente lenta*
	- *Se* non è necessario che i dati della zona di memoria sopravvivano

Si possono utilizzare le funzioni `shm_open` e `shm_unlink`, *fatte ad-hoc* per il *file system virtuale*.
- Creano e rimuovono un file temporaneo
- Che si trova nella cartella `/dev/shm/` che ha montato un FS temporaneo (`tmpfs`)
- I dati sono *in memoria*

```c
#include <sys/mman.h>
int shm_open(const char *name, int oflag, mode_t mode);
int shm_unlink(const char *name);
```

Creano e rimuovono zone di memoria temporanee.
- Semantica analoga a `open` e `unlink`
- Operano su zone di memoria/file temporanee
- `name` è un nome di file, non un path completo
	- Tutte le zone di memoria sono file sotto `/dev/shm/`

**Flusso tipico**
```c
int fd = shm_open(nome, O_RDWR, 0);
ftruncate(fd, size);
void * mem = mmap(NULL, size,  PROT_READ | PROT_WRITE,
                  MAP_SHARED, fd, 0);
...
munmap(shmem, size);

/* Non obbligatorio */
shm_unlink(nome)
```
