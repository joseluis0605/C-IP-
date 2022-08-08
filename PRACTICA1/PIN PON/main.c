#include <stdio.h>
#define pi 3.14
int main() {

    float radio;
    float volumen;
    float  npelotas, transformacion;
    scanf("%f", &radio);
    scanf("%f", &volumen);

    transformacion = (float) radio/1000;

    float aux;
    aux = pi*transformacion*transformacion*transformacion* (4/3);

    npelotas = volumen/aux;

    printf("%0.f", npelotas);


    return 0;
}
