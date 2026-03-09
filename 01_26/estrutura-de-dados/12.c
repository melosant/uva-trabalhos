#include <stdio.h>

int main(){
    int soma = 0;
    char control;

    while (control != 'N'){
        int n;
        printf("Digite um número para atribuir a soma : ");
        scanf("%d", &n);

        soma += n;

        printf("Deseja digitar outro número (S/N) : ");
        scanf(" %c", &control);
    }

    printf("A soma dos números digitados é : %d", soma);
    // return 0;
}