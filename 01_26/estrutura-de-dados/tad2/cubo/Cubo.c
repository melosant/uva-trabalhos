#include <stdlib.h>
#include "Cubo.h"

struct cubo
{
    float a;
};

Cubo* cubo_cria(float a){
    Cubo* c = (Cubo*) malloc(sizeof(Cubo));
    if (c!=NULL){
        c->a = a;
    }
    return c;
}

void cubo_libera(Cubo* c){
    free(c);
}

float cubo_acessa(Cubo* c){
    return c -> a;
}

void cubo_atribui(Cubo* c, float a){
    c -> a = a;
}

float cubo_area(Cubo* c){
    float area = 6 * c->a * c->a;
    return area;
}

float cubo_volume(Cubo* c){
    float volume =  c->a * c->a * c->a;
    return volume;
}