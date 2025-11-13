/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 7: MODULARIZAÇÃO SEM PARÂMETROS - exemplo 2
*/

#include <stdio.h>
#include <locale.h>

int minutos(){
    int hora,min;
    scanf("%d:%d", &hora, &min);
    return(hora * 60 + min);
}

int main(){
    int mins1, mins2;

    setlocale(LC_ALL, "Portuguese");
    printf("Calcula a diferença em minutos entre as horas... \n\n");
    printf("Digite a primeira hora (hora:min): ");
    mins1 = minutos( );
    printf("Digite a segunda hora (hora:min): ");
    mins2 = minutos( );
    printf("\n\nA diferença é %d minutos.", mins2 - mins1);
}