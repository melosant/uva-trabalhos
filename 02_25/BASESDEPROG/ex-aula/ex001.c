/*
Laboratório de Práticas
Matéria : Bases de Programação
Data : 29.11.25

Programa 1: Usuário digita 5 letras, uma de cada vez.
No fim do processamento, imprime a palavra formada.
*/

#include <stdio.h> // biblioteca padrão i/o
#include <stdlib.h>

char palavra[5]; // array de caracteres

int main(void){ // função principal
    for (int i = 0; i < 5; i++){ // loop principal 
        printf("Digite uma letra : ");
        scanf(" %c", &palavra[i]); // entrada do caractere. espaço antes do " %c" a função pode acabar lendo o enter.
    }

    printf("A palavra formada foi %s.\n", palavra); // já formatada para uma string
    system("PAUSE");
}