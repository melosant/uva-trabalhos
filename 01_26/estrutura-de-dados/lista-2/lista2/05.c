#include <stdio.h>

int main(){
    int cont = 100;

    do {
        if (cont % 2 == 0){
            printf("%d\n", cont);
        }
        cont++;
    } while (cont <= 200);
    
    return 0;
}