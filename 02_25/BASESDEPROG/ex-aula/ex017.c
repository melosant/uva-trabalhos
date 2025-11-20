// estruturas de seleção - encadeada x multipla escolha
// prog. 17

#include <stdio.h>
#include <locale.h>

int main(){
    char letra;
    setlocale(LC_ALL, "Portuguese");
    printf("* * Estrutura Encadeada * *\n\n");

    printf("Entre com uma letra (A, B, C ou D): ");
    scanf("%c", &letra);

    switch(letra)
    {
        case 'A':
            printf("\nVocê digitou a letra A.");
            break;
        case 'B':
            printf("\nVocê digitou a letra B.");
            break;
        case 'C':
            printf("\nVocê digitou a letra C.");
            break;
        case 'D':
            printf("\nVocê digitou a letra D.");
            break;
        default:
            printf("Você não digitou nenhuma letra válida.");
            break;
    }
}