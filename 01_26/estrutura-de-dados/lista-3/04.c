/**
Ler duas matrizes A e B com 20 elementos. Construir uma matriz C, sendo esta
formada pelos elementos de A subtraídos dos elementos de B.
*/

#include <stdio.h>

int main(){
    int arrayA[20] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 
                      10, 10, 10, 10, 10, 10, 10, 10, 10, 10,};

    int arrayB[20] = {5, 6, 7, 8, 9, 5, 6, 7, 8, 9,
                      5, 6, 7, 8, 9, 5, 6, 7, 8, 9};

    int arrayC[20];

    for (int i = 0; i < 20; i++)
    {
        arrayC[i] = arrayA[i] - arrayB[i];
        printf("\nMatriz C na posição %d = %d\n", i, arrayC[i]);
    }
    
}