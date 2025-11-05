/*
Laboratório de Práticas
Matéria : Bases de Programação
Data : 29.11.25

Usuário entra com dados para calcular a área do trapézio.
No fim, imprime o resultado
*/

#include <stdio.h>
#include <stdlib.h>

float area, altura, base_maior, base_menor;

int main(void){
    printf("Digite o valor da base maior : ");
    scanf("%f", &base_maior);

    printf("Digite o valor da base menor : ");
    scanf("%f", &base_menor);

    printf("Digite o valor da altura : ");
    scanf("%f", &altura);

    area = (base_maior + base_menor) * altura / 2;

    printf("O valor da área do trapézio é : %.2f\n", area);
    system("PAUSE");
}