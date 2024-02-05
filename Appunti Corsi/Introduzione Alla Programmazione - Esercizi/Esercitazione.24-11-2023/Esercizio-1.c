#include <stdio.h>

int main() {
    // Inserisce dim e robe
    int ord;
    printf("Inserisci ordine della matrice n per matrice nxn");
    scanf("%d", &ord);
    // DimensioneMatrice
    int dim = ord*ord;
    int M[dim];
    // OSS: i/ord "rappresenta" l'indice i-esimo dell'elemento a_{ij}; analogo per i%ord, per colonna.
    for(int i=0; i<dim; i++)
    {
        printf("Inserisci %d%d esimo elemento della matrice", i/ord, i%ord);
        scanf("%d", &M[i]);
    }

    // calcola la diagonale e l'antidiagonale
    int diag = 0;
    int antidiag = 0;
    for(int i=0; i < dim; i++)
    {
        if(i/ord == i%ord)( diag += M[i]);
        if(i/ord == (ord - (i/ord))) ( antidiag += M[i]);
    }
    printf("Diagonale: %d, Antidiagonale: %d \n", diag, antidiag);
    printf("Somma: %d", diag+antidiag);

    return 0;
}
