#include <stdio.h>

int main(){
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += i;
    }
    
    printf("A soma dos 5 primeiros números é : %d", soma);
    return 0;
}