/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 13: MODULARIZAÇÃO COM PARÂMETROS - exemplo 6
*/

#include <stdio.h>
#include <locale.h>

void incrementa(int *n){
    *n = *n + 10;
}

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("\n\nAntes da função : %d", num);
    incrementa(&num);

    printf("\n\nDepois da função : %d", num);
}