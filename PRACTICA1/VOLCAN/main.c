#include <stdio.h>

int main() {

    float  velocidad;
    float distancia;
    int tiempo;

    scanf("%f", &velocidad);
    scanf("%f", &distancia);

    distancia = distancia*1000;
    velocidad = velocidad*60;

    tiempo =(int) (distancia/velocidad)-15;

    printf("%d", tiempo);


    return 0;
}
