/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 05.11.2025

Operador condicional ternário
*/

#include <stdio.h>
int main(){
    int a, b, max;

    printf("Digite um número : ");
    scanf("%d", &a);
  
    printf("Digite outro número : ");
    scanf("%d", &b);

    
    // Operador condicional ternário.  (condição) ? se_verdadeiro : se_falso
    max = (a > b) ? a : b;
    printf("O maior deles é %d\n", max);
}