#include <stdio.h>

int main(){
    int soma = 0;

    for (int i = 10; i <= 20; i++)
    {
        if (i % 2 == 0){
            soma += i;
        }
    }

    printf("A soma dos pares entre 10 e 20 : %d", soma);
    return 0;
    
}