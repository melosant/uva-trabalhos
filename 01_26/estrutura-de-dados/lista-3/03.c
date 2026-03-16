/**
3. Desenvolva um programa que efetue a leitura de 10 elementos para uma matriz
A e apresente no final a somatória dos elementos ímpares. 
*/

#include <stdio.h>

int main(){
    int arrayA[10];
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;
        printf("\nDigite o %d° número: ", (i + 1));
        scanf("%d", &num);
        arrayA[i] = num;
        if (arrayA[i] % 2 != 0) {
            soma += arrayA[i];
        printf("Matriz A posição %d: %d\n", i, arrayA[i]);
        }

    }
    printf("\nSoma total dos ímpares: %d", soma);
}