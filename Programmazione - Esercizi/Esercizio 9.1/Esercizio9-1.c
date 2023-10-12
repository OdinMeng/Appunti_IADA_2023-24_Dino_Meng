/* Prendere due interi, calcolare la loro somma e la loro media (poi per stamparla) => prima si fa l'analisi della RICHIESTA (ovvero l'identificazione delle variabili, i tipi, ...) inoltre obbligatorio "ricreare" la forma di output */

#include <stdio.h>

int main(void) {
  int n1, n2;
  int s;
  float m;

  printf("Inserisci il primo numero INTERO: ");
  scanf("%d", &n1);

  printf("Inserisci il secondo numero INTERO: ");
  scanf("%d", &n2);

  s = n1+n2;
  m = s/2.0; /* !!! bisogna dividere un float per un altro float; senno ti ritorna un altro int, troncando così il numero !!! -*/
  
  printf("La loro somma diviene %d\n", s);
  printf("La loro media aritmedica diviene %f\n", m);
}