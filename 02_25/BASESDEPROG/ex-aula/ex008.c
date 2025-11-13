/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 8: MODULARIZAÇÃO COM PARÂMETROS - exemplo 1
*/

#include <stdio.h>
#include <locale.h>

#define PI 3.1415

float area(float r){
    return(PI * r * r);
}

int main(){
    float raio;

    setlocale(LC_ALL, "Portuguese");
    printf("---------- CALCULE A ÁREA DO CÍRCULO -----------");
    printf("\n\nDigite o raio do círculo : ");
    scanf("%f", &raio);

    printf("\n\nA área do círculo é %.2f", area(raio));
    printf("-------------------------");
}