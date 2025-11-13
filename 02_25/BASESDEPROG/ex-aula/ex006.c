/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 6: MODULARIZAÇÃO SEM PARÂMETROS - exemplo 1
*/

#include <stdio.h>
#include <locale.h>

int n1, n2, produto;

int saida(){
    printf("\n\nO produto de %d com %d é igual a %d ", n1, n2, produto);
}

int entrada(){
    printf("\nEntre com o primeiro número: ");
    scanf("%d", &n1);

    printf("\nEntre com o segundo número: ");
    scanf("%d", &n2);

    produto = n1 * n2;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("-------- MODULARIZAÇÃO -----------");
    entrada();
    saida();
    printf("\n\n-------- FIM DO PROGRAMA -----------");
}