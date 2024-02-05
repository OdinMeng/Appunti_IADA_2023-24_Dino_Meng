#include <stdio.h>

// Paradigma ricorsiva
int FibRic(int n)
{
	if(n == 0){ return n; }
	if(n == 1){ return n; }
	return(FibRic(n-1)+FibRic(n-2));
}

/*
OSS: è possibile implementare FibRic con una complessità lineare mediante le somme parziali.
Da x a 1 (caso base), poi scendendo mi porto i risultati del calcolo. "Emulo" una iterazione con la ricorsione.
Tuttavia qui si ha un "costo" di spazio più elevato dell'implementazione iterativa.
*/


// Paradigma iterativa
int FibIter(int n)
{
  int f1, f2, fi;
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
  }
  return fi;
}

// test
int main(void)
{

}
