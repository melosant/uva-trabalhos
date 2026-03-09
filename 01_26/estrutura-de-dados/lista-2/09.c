#include <stdio.h>

int main(){    
    int i = 2;
    do
    {
        printf("%d x %d = %d\n", i, i, (i * i));
        i++;
    } while (i <= 50);
    
    return 0;
}