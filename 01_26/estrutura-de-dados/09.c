#include <stdio.h>

int main(){    
    for (int i = 2; i <= 50; i++)
    {
        printf("%d x %d = %d\n", i, i, (i * i));
    }

    return 0;
}