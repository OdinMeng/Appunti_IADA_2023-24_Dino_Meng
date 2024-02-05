/* f_1, f_2 (precedente e pre-preceden) vengono aggiornate per iterazione */

#include <stdio.h>

int main(void)
{
  int n;
  int f1, f2;
  int fi;

  printf("Scegli quanti n numeri della sequenza di Fibonacci vuoi printare (n>0):");
  scanf("%d", &n);

  for(int i=0; i<=n; i++)
  {
    if(i <= 1)
    {
      f1 = 1;
      f2 = 0;
      fi = i;
    }
    else
    {
      fi = f1 + f2;
      // "preparo" per la prossima iterazione
      f2 = f1;
      f1 = fi;
    }
    printf("Il numero %d -esimo della sequenza è %d \n", i, fi);
  }
}
