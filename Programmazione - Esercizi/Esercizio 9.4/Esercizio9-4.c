/* Un programma capace di fare 4 operazioni (+, -, *, /) tra due numeri REALI e visualizzare (a+b), (a-b), (ab), (a/b). b DEVE essere 0 */

#include <stdio.h>

int main(void){
  float a,b;
  printf("Inserisci il tuo primo numero REALE: ");
  scanf("%f", &a);

  printf("Inserisci il tuo secondo numero REALE NON-ZERO: ");
  scanf("%f", &b);

  if(b == 0 || b==0.0){
    while(b == 0 || b==0.0 ){
      printf("No, riprova di nuovo;\n Inserisci il tuo secondo numero reale NON ZERO: ");
      scanf("%f", &b);
    }
  }

  printf("La somma a + b è: %f\n", a+b);
  printf("La differenza a-b è: %f\n", a-b);
  printf("Il prodotto a*b è: %f\n", a*b);
  printf("La divisione a/b è: %f\n", a/b);
  
}