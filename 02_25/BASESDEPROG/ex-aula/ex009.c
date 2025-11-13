/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 9: MODULARIZAÇÃO COM PARÂMETROS - exemplo 2
*/

#include <stdio.h>
#include <locale.h>

float area(float b, float a){
    return b * a / 2;
}

int main(void){
    float base, altura;
    
    setlocale(LC_ALL, "Portuguese");
    printf("------ CÁLCULO DA ÁREA DO TRIÂNGULO ------");
    printf("\n\nDigite a base : ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("\n\nA área do triângulo é %.2f", area(base, altura));
}