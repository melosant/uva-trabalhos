/**
5. Ler duas matrizes A e B de 4 elementos cada. Construir uma matriz C, sendo esta a
junção das duas outras matrizes. Desta forma, C deverá Ter o dobro de
elementos, ou seja, 8. 
*/

#include <stdio.h>

int main(){
    int arrayA[4] = {1, 2, 3, 4};

    int arrayB[4] = {5, 6, 7, 8};

    int arrayC[8];

    for (int i = 0; i < 8; i++)
    {
        if (i < 4) {
            arrayC[i] = arrayA[i];
        } else {
            arrayC[i] = arrayB[i - 4];
        }
        printf("\nMatriz C na posição %d = %d\n", i, arrayC[i]);
    }
    
}