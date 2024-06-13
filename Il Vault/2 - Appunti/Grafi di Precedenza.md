---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Grafi di Precedenza
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*Implementazione dei semafori ad un problema: i grafi di precedenza.*
- - -
# Grafi di precedenza
I semafori sono pratici da usare per costruire *grafi di precedenza*
- Un insieme di task che devono essere eseguite in un ordine particolare

I grafi di precedenza modellano molto bene *sistemi distribuiti e concorrenti*
- Le *Reti di Petri* sono un astrazione per trattare grafi di precedenza con l'utilizzo di semafori
- Non vedremo

## Esempio 1
![200](images/graph-a.png)
 

```c
sem_t s1;
void* t_A(void* arg){
    A();
    sem_post(&s1);
}
void* t_B(void* arg){
    B();
    sem_post(&s1);
}
void* t_C(void* arg){
    sem_wait(&s1);
    sem_wait(&s1);
    C();
}
```

## Esempio 2
![200](images/graph-b.png)
 
 
```c
sem_t s1, s2;                                  
void* t_A(void* arg){
    A();
    sem_post(&s1);
    sem_post(&s1);
}
void* t_B(void* arg){
    sem_wait(&s1);
    B();
    sem_post(&s2);
}
void* t_C(void* arg){
    sem_wait(&s1);
    C();
    sem_post(&s2);
}
void* t_D(void* arg){
    sem_wait(&s2);
    sem_wait(&s2);
    D();
}
```

## Esempio 3: Grafo ciclico

![100](images/graph-c.png)

 
```c
sem_t s1, s2;                                      
sem_init(&s1, 0, 1); // Inizializzato a 1
sem_init(&s2, 0, 0); // Inizializzato a 0
void* t_A(void* arg){
    while (1){
        sem_wait(&s1);
        A();
        sem_post(&s2);
    }
}
void* t_B(void* arg){
    while (1){
        sem_wait(&s2);
        B();
        sem_post(&s1);
    }
}
```

**NOTA:** esercizio uguale a lettore/scrittore visto in precedenza

## Esempio 4
![200](images/graph-d.png)
 

```c
sem_t s1, s2, s3; // s1 inizializzata a 1, gli altri a 0            
void* t_A(void* arg){
    while (1){
        sem_wait(&s1);
        A();
        sem_post(&s2);
        sem_post(&s2);
    }
}
void* t_B(void* arg){
    while (1){
        sem_wait(&s2);
        B();
        sem_post(&s3);
    }
}
void* t_C(void* arg){
    while (1){
        sem_wait(&s2);
        C();
        sem_post(&s3);
    }
}
void* t_D(void* arg){
    while (1){
        sem_wait(&s3);
        sem_wait(&s3);
        D();
        sem_post(&s1);
    }
}
```

