/* 
media aritmetica => data alla fine
somma totale s (dopo da dividere)
contatore n (per sapere quale numero dividere)
valore flag => per far andare avant il ciclo o no (1 sì, 0 no)
ciclo while (iterazione indef.) -> se x == 0 => TERMINO il ciclo
-> se invece x != 0 => incremento n, aggiungo a s il numero x 
alla fine controllo se ho inserito qualche numero; se non ho inserito nulla, ritorno 0 (in quanto la media di nulla è 0); se invece ho inserito dei numeri, faccio la media come prevista dalla formula.
*/

#include <stdio.h>

int main(void){
  float media;
  float somma = 0.0;
  float contatore = 0.0;
  int flag = 1;

  while(flag){
    float x;
    printf("Inserisci il tuo numero (x_i): ");
    scanf("%f", &x);

    if(x == 0){
      flag = 0;
    }

    else{
      contatore = contatore + 1.0;
      somma = somma + x;
    }
  }

  if(contatore == 0.0){
    media = 0.0;
  }
  else {
    media = somma/contatore;
  }
    printf("La media dei numeri è: %f \n", media);
}