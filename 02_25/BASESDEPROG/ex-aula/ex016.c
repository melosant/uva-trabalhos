// estruturas de seleção - encadeada x multipla escolha
// prog. 16

#include <stdio.h>
#include <locale.h>

int main(){
    char letra;
    setlocale(LC_ALL, "Portuguese");
    printf("* * Estrutura Encadeada * *\n\n");

    printf("Entre com uma letra (A, B, C ou D): ");
    scanf("%c", &letra);

    if (letra == 'A')
        printf("\nVocê digitou a letra A.");
        else if (letra == 'B')
            printf("\nVocê digitou a letra B");
            else if (letra == 'C')
                printf("\nVocê digitou a letra C");
                else if (letra == 'D')
                    printf("\nVocê digitou a letra D");
                    else
                        printf("Você não digitou nenhuma letra válida.");
}