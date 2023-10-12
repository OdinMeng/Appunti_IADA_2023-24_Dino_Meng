/*
1) inserisco n (il numero di numeri che voglio mettere)
2) inserisco x_i (i da 1 a n);
ho due variabili max, min; x_1 diventa automaticamente max, min
3) se i>1, allora faccio due if
if i > max allora max=i
if i < min allora min=i
4) finito tutto printo max emin
*/

#include <stdio.h>

int main(void)
{
  int n;
  float x;
  float max, min;
  
  printf("Quanti numeri vuoi inserire (n>0)?: ");
  scanf("%d", &n);

  if(n <= 0)
  {
    while( n <= 0)
    {
      printf("No, n dev'essere maggiore di 0.\nQuanti numeri vuoi inserire (n>0)?: ");
      scanf("%d", &n);
    }
  }

  printf("Inserisci un numero (1): ");
  scanf("%f", &x);
  max = x;
  min = x;
  for(int i=2;i <= n; i++)
  {
    printf("Inserisci un numero (%d): ", i);
    scanf("%f", &x);

    if(x > max)
    {
      max = x;
    }

    if(x < min)
    {
      min = x;
    }
  }
  
  printf("Il numero massimo inserito è = %f\n", max);
  printf("Il numero minimo inserito è = %f\n", min);
}
