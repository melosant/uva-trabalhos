#include <stdio.h>

int main(){
    int i = 0;
    do
    {
        if (i % 4 == 0){
            printf("%d\n", i);
        }
        i++;
    } while (i < 20);
    
    return 0;
}