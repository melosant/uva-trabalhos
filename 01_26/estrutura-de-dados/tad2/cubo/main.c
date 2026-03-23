#include <stdio.h>
#include <stdlib.h>
#include "Cubo.h"

int main(){
    float area, volume;
    Cubo* c1;
    c1 = cubo_cria(2.0);
    area = cubo_area(c1);
    printf("area do cubo: %f\n", area);
    volume = cubo_volume(c1);
    printf("volume do cubo : %f\n", volume);
}