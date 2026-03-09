#include <stdio.h>

int main(){
    int contador = 15;

    do{
        if (contador % 2 != 0){
            printf("%d\n", contador);
        }

        contador++;
    } while (contador <= 200);

    return 0;
}