// Programa 20 : Estrutura de Seleção - Exercício 
// Verificação de Estado (switch case)

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int uf;
    char nome[15];

    printf("Informe seu nome : ");
    scanf("%s", nome);

    printf("\n[1] RJ - [2] SP - [3] MG - [4] ES - [5] OUTRO");
    printf("\nInforme seu estado (UF) : ");
    scanf("%d", &uf);

    switch(uf)
    {
        case 1:
            printf("%s, mora na região Sudeste, Rio de Janeiro.", nome);
            break;
        case 2:
            printf("%s, mora na região Sudeste, São Paulo.", nome);
            break;
        case 3:
            printf("%s, mora na região Sudeste, Minas Gerais.", nome);
            break;
        case 4:
            printf("%s, mora na região Sudeste, Espírito Santo.", nome);
            break;
        default:
            printf("%s, mora não mora na região Sudeste.", nome);
            break;
    }
}