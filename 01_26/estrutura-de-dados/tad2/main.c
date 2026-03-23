#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main(){
    float d;
    Ponto *p, *q;

    p = pto_cria(10, 21);
    q = pto_cria(7, 25);

    d = pto_distancia(p, q);

    printf("Distancia entre pontos: %f\n", d);
    pto_libera(p);
    pto_libera(q);
    return 0;
}