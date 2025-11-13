/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 12: MODULARIZAÇÃO COM PARÂMETROS - exemplo 5
*/

#include <stdio.h>

int troca(int *x, int *y){
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int a, b;

    printf("-------- TROCA DE VALORES ----------");
    printf("\n\nDigite o valor A : ");
    scanf("%d", &a);
    printf("Digite o valor B : ");
    scanf("%d", &b);

    troca(&a, &b);

    printf("Valores trocados, A = %d e B = %d ", a, b);
}