/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 10: MODULARIZAÇÃO COM PARÂMETROS - exemplo 3
*/

#include <stdio.h>
#include <locale.h>

float converte(float c){
    return (c * 9/5) + 32;
}

int main(){
    float celsius, farenheit;

    setlocale(LC_ALL, "Portuguese");

    printf("------ CONVERSÃO DE TEMPERATURA ------");
    printf("\n\nDigite os graus celsius C° : ");
    scanf("%f", &celsius);

    farenheit = converte(celsius);

    printf("A conversão de %f em farenheit deu %.2fF°", celsius, farenheit);
}