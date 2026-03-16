#include <stdio.h>

int main(){
    int soma = 0;
    int i = 0;
    do {
        soma += i;
        i++;
    } while (i <= 5);
    
    
    printf("A soma dos 5 primeiros números é : %d", soma);
    return 0;
}