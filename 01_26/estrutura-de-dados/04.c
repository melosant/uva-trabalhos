#include <stdio.h>

int main(){
    for (int i = 15; i <= 200; i++)
    {
        printf("%d x %d = %d\n", i, i, (i * i));
    }
    
    return 0;
}