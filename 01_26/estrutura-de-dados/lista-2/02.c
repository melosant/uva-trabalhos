#include <stdio.h>

int main(){
    int soma = 0;
    for (int i = 0; i <= 100; i++)
    {
        soma += i;
    }
    printf("A soma dos 100 primeiros inteiros : %d", soma);
    return 0;
}