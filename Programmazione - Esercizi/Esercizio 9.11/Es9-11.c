/*

progressione geometrica a partire da n=1
a^1 + ... + a^n = (a^{n+1}-1)/(a-1) - 1

S(a, n)

ci sono due iterazioni innestate; la somma E la potenza
*/

#include <stdio.h>

int main(void)
{
  int n, k;
  int sum = 0;
  int pot = 1;
  
  printf("Inserisci un numero n (base): ");
  scanf("%d", &n);
  printf("Inserisci un numero k (indice superiore): ");
  scanf("%d", &k);
  
  for(int i = 1; i <= k; i = i+1)
  {
    pot = pot * n;

    /* parte rimossa 
    for(j = 1; j <= i; j++){ pot = pot * n }
    */
    
    sum = sum + pot;
  }

  printf("Risultato sommatoria: %d\n", sum);
}
/* per casa disegno la memoria di QUESTO esercizio!!! */

/* il ciclo interno si può eliminare... ??? potevo calcolare k^2 usando k*k, k^3 usando k^2*k; sfrutto la proprietà induttiva x^{n+1} = x^n * x */
