---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Lista di Codici Sistemi Operativi
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Lista di codici delle slide gialle per il corso di Sistemi Operativi.*
- - -
# Consegne
## Unità 3: C (14)
1. **Esercizio**: si crei un programma che effettua la somma vettoriale tra due vettori bi-dimensionali. Creare due versioni del file: con e senza struct.
	- Soluzione: [[#^3-1]]
2. **Esempio:** Uno studente può essere identificato col *numero di tessera sanitaria* o con la *matricola* a seconda della situazione. Creare una union che rappresenti un'istanziazione di uno studente.
	- Soluzione: [[#^3-2]]
3. **Esempio**: Stampare tutte le lettere maiuscole e minuscole
	- Soluzione: `for(char A='a'; A<='z'; A++) putchar(A); for(char A='A'; A<='Z'; A++) putchar(A);`
4. **Esercizio**: si acquisisca una stringa da tastiera e si verifichi se è palindroma
	- Soluzione: [[#^3-4]]
5. **Esercizio**: si acquisisca una riga da tastiera e si trasformi in *title case*. Una stringa in *title case* ha le iniziali (e solo le iniziali) di ogni parola maiuscole.
	- Soluzione: [[#^3-5]]
6. **Esercizio:** si scriva un programma che riceve due interi come parametri e ne stampa la somma. Esempio: `./programma 1 2` stampa `3` (o comunque che contenga l'output corretto).
	- Soluzione: [[#^3-6]]
7. **Esempio:** si crei e si usi una funzione che applica a ogni elemento di un vettore di interi una funzione fornita dal chiamante.
	- Soluzione: [[#^3-7]]
8. **Esempio:** si crei e si usi una funzione che combini due interi usando una funzione fornita dal chiamante e stampi il risultato.
	- Soluzione: [[#^3-8]]
9. **Esempio**: si legga un path da tastiera e se ne stampi il contenuto come file di testo
	- Soluzione: [[#^3-9]]
10. **Esempio**: si legga un numero $N$ da tastiera e si stampi sul file `numeri.txt` i numeri da 1 a $N$
	- Soluzione: [[#^3-10]]
11. **Esercizio**: si legga `persone.txt` che contiene su ogni riga nome ed età di una persona, separati da `' '`. Si calcoli l'età media. 
	- Soluzione: [[#^3-11]]
	- Esempio di file:
```
martino 31
andrea 37
```
12. Si scriva un programma che riceve il nome di un file da riga di comando e ne stampa il contenuto.
	- Soluzione: [[#^3-12]]
13. Si scriva un programma che riceve base e altezza di un triangolo da riga di comando e stampa la sua area. Base e altezza sono numeri con virgola.
	- Soluzione: [[#^3-13]]
14. Si scriva un programma che riceve come parametro il nome di due file: Il primo file è di input e contiene un intero *positivo* per riga; il secondo file è di output e vi viene scritto il numero minimo del file di input. Dopodiché crei una riga di comando in bash che svolge lo stesso compito, ipotizzando che il file di input sia `in.txt` e quello di output `out.txt`
	- Soluzione: [[#^3-14]]

## Unità 4: File System (7)
1. **Esempio-Esercizio.** Per un progetto si crea il gruppo `progettoSysOp`, che contiene 3 utenti. Si crea la cartella condivisa `/share/progetto` e la si assegna al gruppo `progettoSysOp`
	- Soluzione: `mkdir /share/progetto` poi `sudo chgrp progettoSysOp /share/progetto` e infine `sudo chmod g+s /share/progetto`
2. Lettura di un vettore di interi: si supponga un file contente (in binario) i 2 interi che rappresentano i numeri $1990$ e $2023$. Si scriva un programma in C che legga questo file, con i 2 interi.
	- Soluzione: [[#^4-2]]
3. **Esempio**: scrittura utilizzando System Call e funzioni di libreria
	- Soluzione: [[#^4-3]]
4. Stampare `Hello, World` sullo schermo usando la System Call `write` e la funzione di libreria `fprintf`
	- `write(stdout, "Hello,World!\n", sizeof("Hello,World!\n"));` e `fprintf(stdout, "Hello,World!\n");`
5. **Esempio**: si legga un path da tastiera e se ne stampi il contenuto come file di testo
	- Soluzione: [[#^4-5]]
6. Si scriva un programma che riceve un path da riga di comando e stampa se esso é file, directory o link simbolico.
	- Soluzione: [[#^4-6]]
7. Si scriva un programma che riceve una directory da riga di comando e ne lista il contenuto. 
	- Soluzione: [[#^4-7]]

## Unità 5: Processi (18)
1.  Scrivere un programma che si duplica, ed esegue rami di codici diversi.
	- Soluzione: Banale (serve per fissare i concetti)
2. **Esercizio:** si scriva un programma che implementa il seguente grafo di precedenze con `fork` e `wait`.
	- Soluzione: [[#^5-2]]
![width:250px bg right:22% ](images/fork-wait-simple.png)
3. **Esercizio:** si scriva un programma che implementa il seguente grafo di precedenze con `fork` e `wait`.
	- Soluzione: [[#^5-3]]
![width:400px bg right:40% ](images/fork-wait-simple-2.png)
4. **Esercizio:** si scriva un programma che implementa il seguente grafo di precedenze con `fork` e `wait`.
	- Soluzione: [[#^5-4]]
![width:250px bg right:40% ](images/fork-wait-imp.png)

5. **Esercizio:** si scriva una *semplice shell* usando le funzioni `fork`, `wait` e `exec`
	- Soluzione: [[#^5-5]]
6. **Esercizio:** Implementare la funzione `system` con le `fork` e `exec`.
	- Soluzione: [[#^5-6]]
7. **Esercizio:** Si scriva un programma che fa il listing dettagliato di una cartella. La cartella è passata come argomento. Se non ci sono argomenti, lista la directory corrente. Si usi `ls -lh cartella`
	- Soluzione: [[#^5-7]]
8. **Esempio:** si crei una funzione per ignorare un segnale definito dal chiamante
	- Soluzione: [[#^5-8]]
9. **Esempio:** si crei un programma che gestisce i segnali `SIGINT`, `SIGHUP` e `SIGTERM`
	- Soluzione: [[#^5-9]]
10. **Esercizio:** si crei un programma che genera un processo figlio. Il padre manda al figlio un segnale `SIGUSR1` ogni secondo. Il figlio stampa l'avvenuta ricezione.
	- Soluzione: [[#^5-10]]
11. **Esempio:** funzione `sleep` implementata con `alarm` e `pause`
	- Soluzione: [[#^5-11]]
12. **Esercizio:** si scriva un programma in C che memorizza quanti `SIGTERM` ha ricevuto. Alla pressione di `CTRL+C` stampa tale numero e termina. Si nomini il programma `sample`. Inoltre si scriva anche uno script bash che manda 10 segnali `SIGTERM` al processo.
	- Soluzione: [[#^5-12]]
	- **Extra:** si faccia uno script bash che automatizza tutta la sequenza: avvio del programma in C, consegna segnali e chiusura.
13. **Esercizio:** si crei un programma bash che conta quanti SIGUSR2 riceve, e li stampa quando viene premuto `CTRL+C` e lo si nomini `sample.sh`
	- Soluzione: [[#^5-13]]
14. **Esercizio:** si crei un programma che genera un figlio. Il processo padre riceve una stringa da riga di comando e la passa al figlio tramite una *pipe*. Il figlio riceve la stringa e la stampa.
	- Soluzione: [[#^15-14]]
15. **Esercizio:** si crei un programma con due processi. Il processo padre riceve il nome di un file da riga di comando e ne passa il contenuto al figlio tramite una *pipe*. Il figlio riceve il contenuto e lo stampa.
	- Soluzione: [[#^15-15]]
16. **Esercizio:** si crei un programma che: se riceve `read` come argomento, stampa ciò che viene scritto su una pipe. Se riceve `write` come argomento, legge iterativamente una riga da tastiera e la scrive su una pipe.
	- Soluzione: [[#^16-16]]
17. **Esercizio:** si crei un programma che legge da una FIFO e stampa il contenuto in maiuscolo.
	- Soluzione: [[#^17-17]] 
18. **Esercizio:** Si creino due programmi che hanno una memoria condivisa con `mmap` e `shm_open`. Il primo programma permette di scrivere una stringa nella memoria, mentre il secondo permette di leggerla.
	- Soluzione: [[#^18-18]]

## Unità 6: Memoria (4)
1. **Esempio di sovradimensionamento:** media di $N$ numeri letti da tastiera, usando il sovradimensionamento e senza tenersi la somma
	- Soluzione: [[#^6-1]]
2. **Esercizio:** si scriva un programma che memorizza un numero $N$ di `float` letti da tastiera. Il numero $N$ è letto da tastiera all'inizio del programma. Infine il programma ne stampa la media.
	- Soluzione: [[#^6-2]]
3. **Esercizio:** si scriva una funzione che ritorna un sequenza di $N$ `float` equispaziati tra $a$ e $b$. Ovvero dato un intervallo $[a,b]$ ritornare una sua suddivisione $\Delta$ equispaziata con $N$ elementi.
	- Soluzione: [[#^6-3]]
4. **Esercizio:** si scriva una funzione che riceve come argomenti un interno $N$ e un pattern $p$. La funzione ritorna una stringa lunga $N$ che contiene il pattern $p$ ripetutamente. Esempio: `repeat(5, "ah")` $\rightarrow$ `ahaha`
	- Soluzione: [[#^6-4]]

## Unità 7: Thread (8)
1. **Esercizio.** Si crei un programma che avvia $10$ thread che attendono un tempo casuale tra $0$ e $5$ secondo prima di terminare
	- Soluzione: [[#^7-1]]
2. **Esempio.** Si crei un programma che compie la somma $\sum_{i=1}^{2000000}1$, usando due *thread*. Creare una versione che *non* usa il mutex, un altra che li usa per proteggere la sezione critica. Cosa noti?
	- Soluzione: [[#^7-2]]
3. Si creino due programmi che comunicano tramite un semaforo. Il primo effetua una `post` ogni volta che l'utente preme *Enter*. Il secondo stampa una stringa ogni volta che il primo effettua una `post`
	- Soluzione: [[#^7-3]]
4. Si crei un programma con due thread. Il primo ogni secondo manda un messaggio al secondo, usando una variabile globale condivisa (di tipo `char[]`). Il secondo lo stampa. 
	- Soluzione: 
5. Implementare il Mutex con i semafori.
	- Soluzione: 
6. Reimplementare le soluzioni agli esercizi 5.2, 5.3., 5.4. usando i semafori.
	- Soluzione: 
7. Implementare il seguente grafo di precedenza, usando i semafori.
	- Soluzione: 
![100](images/graph-c.png)
8. Implementare il seguente grafo di precedenza, usando i semafori.
	- Soluzione: [[#^7-8]]
![200](images/graph-d.png)

## Unità 8: Socket (2)
1. Il server $45.79.112.203$ alla porta TCP $4242$ offre un servizio di `echo`: se un client vi si connette e manda un messaggio, il server risponde con lo stesso messaggio. Si crei un programma che si connette al suddetto endpoint, manda un messaggio e stampa la risposta un messaggio.
	- Soluzione: 
2. Usare `nc` per scambiare messaggi tra due PC
	- Soluzione: `nc -l <porta>` e dall'altro lato `nc <ip> <porta>`

---

---

# Soluzioni
## Unità 3: C
...

**3-11.**
```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAXLINE 1024

int main(void)
{
	FILE * f;
	char nullbuffer[MAXLINE];
	int s = 0;
	int s_i;
	int n = 0;
	
	f = fopen("./persone.txt", "r");
	while(fscanf(f, "%s %d)", nullbuffer, &s_i) != EOF){ s+=s_i; n++; }
	fclose(f);
	
	printf("Età media: %f", (s+0.0)/(n+0.0));
	return 0;
}
```
^3-11

...

## Unità 4: File System
...
**4-2.**
```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	FILE *f;
	f = fopen("file", "rb");
	int vec[2];
	if(fread(vec, sizeof(int), 2, f)<0){ perror("Error reading file"); fclose(f); return -69; }
	fclose(f);
	
	printf("File content: %d %d", vec[0], vec[1] );
	return 0;

}
```
^4-2


**4-5.**
```c
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int argc, char* argv[] )
{
	if(argc != 2)
	{
		printf("Usage: ./%s <filepath>", argv[0]);
		return -1;
	}
	
	struct stat buf;
	if(stat(argv[1], &buf) != 0)
	{
		perror("Error reading file metadata");
		return -69420;
	}
	
	printf("File is a...");
	if(S_ISREG(buf.st_mode) ) printf("regular file!\n");
	else if(S_ISDIR(buf.st_mode) ) printf("directory!\n");
	else if(S_ISLNK(buf.st_mode) ) printf("symbolic link!\n");
	else if(S_ISFIFO(buf.st_mode) ) printf("FIFO!\n");
	else printf("we don't know, honestly.\n");
	
	return 0;
}
```
^4-5
...

**4-7.**
```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#define MAXSTR 1024

int main(int argc, char* argv[] )
{
	if(argc != 1){ printf("Usage: ./%s <pathname>", argv[0]); exit(EXIT_FAILURE); }
	
	char path[MAXSTR];
	DIR * dir = opendir(path);
	struct dirent * dirp;
	
	if(dir == NULL){ perror("Error opening directory"); exit(EXIT_FAILURE); }
	
	while( (dirp = readdir(dir) ) != NULL)
	{
		printf("Inode: %d\n\tName: %s\n", dirp->d_ino, dirp->d_name);
	}
	
	return 0;
}
```
^4-7

## Unità 5: Processi
2.

^5-2

3.
```c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#intluce <sys/types.h>

void T(int n)
{
	printf("Task T%d\n", n);
}

int main(void)
{
	T(1);
	if(fork() )
	{ // Father
		T(2);
		T(4);
		wait();
		T(7);
		return 0;
	}
	else
	{ // Son
		T(3);
		if(fork() )
		{ // Son-father
			T(5);
			wait();
			return 0;
		}
		else
		{ // Son-son
			T(6);
			return 0;
		}
	}
}
```
^5-3

4.

^5-4

5.

^5-5

6.
```c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int my_system(char* command)
{
	int retval;
	if(fork() )
	{ // Father
		if(wait(&retval) == -1)
		{
			perror("Child error");
			return(EXIT_FAILURE);
		}
		return retval;
	}
	else
	{
		execl("/bin/sh", "sh", "-c", command, (char*)NULL);
		// Supposedly unreachable code
		perror("Exec error");
		return(EXIT_FAILURE);
	}
}

int main(void)
{
	// Tests
	my_system("ls");
	my_system("echo Hello");
}


```
^5-6

7.

^5-7

**5-10**
```c
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void handler(int signal)
{
	printf("Received signal from father\n");
}

int main(void)
{
	pid_t pid;
	if(pid = fork() )
	{ // Father
		while(!sleep(1)) kill(pid, SIGUSR1);
	} 
	else
	{ // Son
		struct sigaction nact;
		struct sigaction oact;
		sigemptyset(&(nact.sa_mask));
		nact.sa_handler = handler;
		nact.sa_flags = 0;
		
		sigaction(SIGUSR1, &nact, &oact);
		while(1)
		{
			// Busy waiting...
		}
	}
	
	// Unreachable code
	return 0;
}
```
^5-10

**5-11.**
```c
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void my_sleep(unsigned int t)
{
	signal(SIGALRM, SIG_IGN);
	alarm(t);
	pause();
}
```
^5-11

**5-17.**
```c
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>

#define MAXLINE 1024

int main(void)
{
	FILE * fifo = fopen("x", "r");
	
	char buffer[MAXLINE];
	while(fgets(buffer, MAXLINE, fifo)!=NULL)
	{
		for(int i=0; i<strlen(buffer); i++) buffer[i]=toupper(buffer[i]);
		printf("%s", buffer);
	}
}

```
^5-17

## Unità 6: Memoria
1. **6.1.**
```c
#include <stdio.h>
#define MAXN 50 /* Se n>50 il programma non funziona */
int main() {
    int n, i;
    float v[MAXN], s = 0;

    printf("Quanti numeri vuoi leggere? ");
    scanf("%d", &n); /* Se n>50 il programma non funziona */
    printf("Inserisci %d numeri:\n", n);

    for (i=0; i<n; i++) 
        scanf("%f", &v[i]); //  &v[i] == v+i
    for (i=0; i<n; i++)
        s += v[i];
    printf("Media: %f\n", s/n);

    return 0;
}
```
^6-1

2. **6.2.**
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	 int n;
	 printf("Size array:");
	 scanf("%d", &n);
	 
	 (float *)array = (float *)malloc(sizeof(float)*n);
	 
	 printf("Insert numbers. \n");
	 for(int i=0; i<n; i++)
	 {
		 scanf("%d", array+i);
	 }
	 
	 float sigma = 0;
	 for(int i=0; i<n; i++)
	 {
		 sigma += *(array+i);
	 }
	 
	 printf("%d", sigma/n);
	 
	 free(array);
	return 0;
}
```
^6-2

3. **6.3.**
```c
#include <stdlib.h>

float * get_sequence(int N, float a, float b)
{
	float * seq = (float *)malloc(sizeof(float)*N);
	for(int i=0; i< N; i++)
	{
		*(seq+i) = a + ((i+0.0)/N)*(b-a);
	}
	
	return seq;
}

// Esempio: Caso $[a,b]=[2, 6.5]$ e $N=10$
int main(void)
{
	float * out;
	out = get_sequence(10, 2, 6.5);
	
	free(out);
	return 0;
}
```
^6-3

4. **6.4.**
```c
#include <stdlib.h>
#include <string.h>

char* multiply_string(int N, char* pattern)
{
	int length = strlen(pattern);
	char* multiplied = (char*)malloc(sizeof(char)*N);
	
	for(int i=0; i<N; i++)
	{
		*(multiplied+i) = *(pattern+(i%length));
	}
	
	return multiplied;
}

// Eixample: repeat(5, "ah")
int main(void)
{
	char* laugh = multiply_string(5, "ah");
	// blablabla
	free(laugh);
	return 0;
}
```
^6-4

## Unità 7: Thread
1. **7.1.**
```c
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define T 5
#define N 10

void* fun(void* dfssdfejosgjse)
{
	int t = rand() % T;
	sleep(t);
	return NULL;
}

int main(void)
{
	pthread_t threads [N];
	for(int i=0; i<N; i++)
	{
		pthread_create(&threads[i], NULL, fun, NULL);
	}
	
	for(int i=0; i<N; i++)
	{
		pthread_join(threads[i], NULL);
	}
	
	return 0;
}

```
^7-1

**7-2**
```c
#include <pthread.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

static int glob1 = 0;
static int glob2 = 0;
static pthread_mutex_t my_mutex;

void* sum_no_mutex(void * arg)
{
	int loc = 0;
	for(int i=0; i<1000000; i++)
	{
		loc = glob1;
		loc++;
		glob1 = loc;
	} 
	return NULL;
}

void* sum_mutex(void * arg)
{
	int loc=0;
	for(int i=0; i<1000000; i++) 
	{
		pthread_mutex_lock(&my_mutex);
		loc = glob2;
		loc++;
		glob2 = loc;
		pthread_mutex_unlock(&my_mutex);
	}
	return NULL;
}

int main(void)
{
	pthread_mutex_init(&my_mutex, NULL);

	pthread_t t1, t2;
	pthread_create(&t1, NULL, sum_no_mutex, NULL);
	pthread_create(&t2, NULL, sum_no_mutex, NULL);
	
	pthread_t t3, t4;
	pthread_create(&t3, NULL, sum_mutex, NULL);
	pthread_create(&t4, NULL, sum_mutex, NULL);
	
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_join(t3, NULL);
	pthread_join(t4, NULL);
	
	pthread_mutex_destroy(&my_mutex);
	
	printf("No mutex: %d\nMutex: %d\n", glob1, glob2);
	
	return 0;
}

/* Output Example
No mutex: 1544201
Mutex: 2000000
*/
```
^7-2

**7-3**
```c
// Programma 1
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
	sem_t * my_semaphore;
	if(my_semaphore=sem_open("/my_semaphore", O_CREAT | O_EXECL) == SEM_FAILED)
	{
		my_semaphore = sem_open("/my_semaphore", O_CREAT, S_IRUSR | S_IWUSR, 0);
	}
	
	while(1)
	{
		gets(NULL);
		sem_post(my_semaphore);
	}
	
	return 0; // Unreachable code
}

// Nota: per problemi di privilegi eseguire questo codice con sudo.
```
```c
// Programma 2
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
	sem_t * my_semaphore;
	if(my_semaphore=sem_open("/my_semaphore", O_CREAT | O_EXCL) == SEM_FAILED)
	{
		my_semaphore = sem_open("/my_semaphore", O_CREAT, S_IRUSR | S_IWUSR, 0);
	}
	
	while(1)
	{
		sem_wait(my_semaphore);
		printf("Received post\n");
	}
	
	return 0; // Unreachable code
}

// Nota: per problemi di privilegi eseguire questo codice con sudo.
```
^7-3

...

**7-8**
```c
#include <semaphore.h>
#include <pthread.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static sem_t* sem_1;
static sem_t* sem_2;
static sem_t* sem_3;
static sem_t* sem_4; // Last minute

void* A(void * empty)
{ // Level 1
	while(1)
	{
		sem_wait(sem_3);
		printf("Task A\n");
		sem_post(sem_1);
		sem_post(sem_4);
		sleep(1);
	}
}

void* B(void * empty)
{ // Level 2
	while(1)
	{ 
		sem_wait(sem_1);
		printf("Task B\n");
		sem_post(sem_2);
		sleep(1);
	}
}

void* C(void * empty)
{ //Level 2
	while(1)
	{ 
		sem_wait(sem_4);
		printf("Task C\n");
		sem_post(sem_2);
		sleep(1);
	}
}

void* D(void * empty)
{ // Level 3
	while(1)
	{
		sem_wait(sem_2);
		sem_wait(sem_2);
		printf("Task D\n");
		sem_post(sem_3);
		sleep(1);
	}
}

int main(void)
{
	// Note: the program wants for the semaphores to be uninitialized, i don't want to complicate my life....
	sem_1 = sem_open("/sem1", O_CREAT, S_IREAD|S_IWRITE, 0);
	if(sem_1 == NULL){ perror("Error opening semaphore 1"); exit(-1); }
	
	sem_2 = sem_open("/sem2", O_CREAT, S_IREAD|S_IWRITE, 0);
	if(sem_2 == NULL){ perror("Error opening semaphore 2"); exit(-1); }
	
	sem_4 = sem_open("/sem4", O_CREAT, S_IREAD|S_IWRITE, 0);
	if(sem_4 == NULL){ perror("Error opening semaphore 4"); exit(-1); }
	
	sem_3 = sem_open("/sem3", O_CREAT, S_IREAD|S_IWRITE, 1);
	if(sem_3 == NULL){ perror("Error opening semaphore 1"); exit(-1); }
	
	pthread_t t1, t2, t3, t4;
	pthread_create(&t1, NULL, A, NULL);
	pthread_create(&t2, NULL, B, NULL);
	pthread_create(&t3, NULL, C, NULL);
	pthread_create(&t4, NULL, D, NULL);
	
	// Unreachable code: threads are never-ending
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_join(t3, NULL);
	pthread_join(t4, NULL);
	return 0;
}
```
^7-8

## Unità 8: Socket