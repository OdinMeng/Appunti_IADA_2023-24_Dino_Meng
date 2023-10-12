#include <stdio.h>

int main(void){
  float media;
  float somma = 0.0;
  float contatore = -1.0;
  float x;
  
  do
  {
    printf("Inserisci il tuo numero (a_i):");
    scanf("%f", &x);

    contatore = contatore + 1.0;
    somma = somma + x;
    
  } while( x != 0);

  if(contatore == 0.0){ media = 0.0;}
  else{media = somma/contatore;}
  
  printf("La media di tutti questi numeri è: %f", media);
}