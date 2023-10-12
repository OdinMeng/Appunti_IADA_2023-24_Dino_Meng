/* Un programma che legga UN valore intero e visualizzi il valore intero precedente e il successivo */

#include <stdio.h>

int main(void){
  int n; 

  printf("Inserisci il tuo numero INTERO: ");
  scanf("%d", &n);

  printf("Il successivo di %d è %d \n", n, n+1);
  printf("Il precedente di %d è %d \n", n, n-1);
  
}
