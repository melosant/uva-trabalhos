/** 
1. Desenvolva um programa que efetue a leitura de 10 valores para uma matriz A
e que esses valores sejam passados para a matriz B acrescentando 10 por cento a cada
elemento
**/

#include <stdio.h>

int main(){
    int arrayA[10];
    int arrayB[10];

    for (int i = 0; i < 10; i++)
    {
        int num;
        printf("Digite o %d° número: ", (i + 1));
        scanf("%d", &num);
        arrayA[i] = num;
        arrayB[i] = arrayA[i] * 1.1;
        printf("Matriz A posição %d: %d\n", i, arrayA[i]);
        printf("Matriz B posição %d: %d\n\n", i, arrayB[i]);
    }
}