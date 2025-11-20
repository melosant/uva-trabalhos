// Programa 21 : Laboratório de Práticas
// Sexo Feminino

#include <stdio.h>
#include <locale.h>

int main(){
    int idade;
    char sexo,
         nome[15];

    printf("Digite o nome : ");
    scanf("%s", nome);

    printf("Digite o sexo (M/F) : ");
    scanf(" %c", &sexo);

    printf("Digite a idade : ");
    scanf("%d", &idade);

    if (sexo == 'F')
        printf("%s, Mulher, %d anos.", nome, idade);
    else printf("Isso é tudo.");
}   