#include <stdio.h>

int main(){
    for (int i = 0; i < 20; i++)
    {
        if (i % 4 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}