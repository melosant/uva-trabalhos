// Programa 18 : Estrutura de Seleção - Exercício 
// Verificação de Pares e Ímpares (if-else)

#include <stdio.h>

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("PAR");
    else
        printf("ÍMPAR");
}