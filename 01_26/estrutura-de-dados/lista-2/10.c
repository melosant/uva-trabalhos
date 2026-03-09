#include <stdio.h>

int main(){
    int soma = 0;
    int i = 10;
    do
    {
        if (i % 2 == 0){
            soma += i;
        }
        i++;
    } while (i <= 20);
    
    printf("A soma dos pares entre 10 e 20 é : %d", soma);
    return 0;
    
}