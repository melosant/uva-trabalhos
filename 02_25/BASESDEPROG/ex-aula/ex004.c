/*
Laboratório de Práticas 
Matéria : Bases de Programação
Data : 05.11.2025

Cálculo salário líquido
Prática Teste de Mesa
*/

#include <stdio.h>

int main(){
    /*
    ----------- TESTE DE MESA ----------------

    float sbruto, desc, acresc, sliq;

    printf("Salário Bruto : ");
    scanf("%f", &sbruto);

    printf("Descontos : ");
    scanf("%f", &desc);

    printf("Acréscimo : ");
    scanf("%f", &acresc);

    sliq = sbruto - desc + acresc;

    printf("SÁLARIO LÍQUIDO : %.2f", sliq);
    */

    /*
    ----------- PÓS ENCREMENTO a++ e PRÉ ENCREMENTO --b/--e ----------------
    */

    int a=1,
        b=3,
        c=4,
        d, e;

        a++;
        d = --b;
        c += a;
        e = a + b * c;
        --e;

        printf("RESULTADO : %d, %d, %d, %d, %d", a,b,c,d,e);
}