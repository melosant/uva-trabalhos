/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 15: MODULARIZAÇÃO COM PARÂMETROS - exemplo 8
*/

#include <stdio.h>
#include <locale.h>

int fatorial(int n){
    if (n <= 1)
        return 1;
    else    
        return(n * fatorial(n-1));
}

int main(){
    int x;

    setlocale(LC_ALL, "Portuguese");
    printf("---- FATORIAL ----\n\n");

    printf("entre com um número inteiro : ");
    scanf("%d", &x);

    printf("\nfat(%d!) = %d\n", x, fatorial(x));
}