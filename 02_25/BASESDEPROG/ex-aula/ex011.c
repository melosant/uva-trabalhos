/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 12.11.2025

Programa 11: MODULARIZAÇÃO COM PARÂMETROS - exemplo 4
*/

#include <stdio.h>
#include <locale.h>

int barra (int pontos){
    int i;

    for(i=1; i<=pontos; i++){
        printf("\xDB");
    printf("\n");
    }
}

int main(){
        setlocale(LC_ALL, "Portuguese");
        printf("------ CÓDIGO DE BARRAS --------\n\n");
        setlocale(LC_ALL, ".OCP");
        printf("Alfredo\t");
        barra(27);
        printf("Renata\t");
        barra(41);
        printf("Juan\t");
        barra(34);
        printf("Giullia");
        barra(22);
        printf("Gilmar\t");
        barra(19);
}