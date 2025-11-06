/* 
laboratório de Práticas
Matéria : Bases de Programação
Data : 29.11.25

Programa 3: Cadastro de pessoas (nome, idade, sexo e altura)
Ao final, imprimir somente nome e altura
*/

#include <stdio.h>
#include <stdlib.h>

char nome[15];
char sexo[1];
int idade;
float altura;

int main(void){
    printf("Digite seu nome : ");
    scanf(" %s", &nome);

    printf("Digite sua idade : ");
    scanf("%d", &idade);

    printf("Digite seu sexo (M/F) : ");
    scanf(" %c", &sexo);

    printf("Informe sua altura : ");
    scanf("%f", &altura);

    printf("Olá, %s, você tem %.2f de altura.\n", nome, altura);
    system("PAUSE");
}