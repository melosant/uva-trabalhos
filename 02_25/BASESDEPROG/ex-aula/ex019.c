// Programa 19 : Estrutura de Seleção - Exercício 
// Verificação de Estado Civil (if-else if-else)

# include <stdio.h>
# include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    char civil;
    char nome[15];

    printf("Informe seu nome : ");
    scanf("%s", nome);

    printf("Informe seu estado civil (Casado (C) - Solteiro (S) - Outros (O)) : ");
    scanf(" %c", &civil);

    if (civil == 'C')
        printf("%s, você é CASADO", nome);
    else if (civil == 'S')
        printf("%s, você é SOLTEIRO", nome);
    else
        printf("%s, seu estado civil é OUTROS", nome);
}