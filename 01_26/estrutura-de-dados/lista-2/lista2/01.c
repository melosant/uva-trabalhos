#include <stdio.h>

int main(){
    int cont = 0;
    while(cont <= 20){
        if (cont % 2 != 0) {       
            printf("%d\n", cont);
        }
        cont += 1;
    }
    return 0;
}