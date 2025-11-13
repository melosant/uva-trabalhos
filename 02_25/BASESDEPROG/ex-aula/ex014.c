/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 14: MODULARIZAÇÃO COM PARÂMETROS - exemplo 7
*/

#include <stdio.h>
#include <locale.h>

int fibonacci(int n){
    int x;
    if (n == 1){
        return (1);
    }

    if (n == 2){
        return (1);
    }

    x = fibonacci(n-1) + fibonacci(n-2);
    return (x);
}

int main(){
    int n, i;

    setlocale(LC_ALL, "Portuguese");
    printf("---- SÉRIE DE FIBONACCI ----");

    printf("\n\nDigite o número de termos da sequência : ");
    scanf("%d", &n);

    while(n <= 0){
        printf("\n\nNúmero incorreto. Digite um número válido : ");
        scanf("%d", n);
    }

    printf("\n");
    for (i = 1; i <= n; i++){
        printf("%d ", fibonacci(i));
    }

    printf("\n");
}