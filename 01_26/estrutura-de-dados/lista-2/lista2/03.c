#include <stdio.h>

int main(){
    int num;
    char control;

    while (control != 'N'){
        printf("Digite um número para ver a tabuada : ");
        scanf("%d", &num);
    
        for (int i = 0; i <= 10; i++)
        {
            printf("%d x %d = %d\n", num, i, (num * i));
        }
        
        printf("Deseja continuar (S/N) : ");
        scanf("%s", &control);
    }
        
    return 0;
}