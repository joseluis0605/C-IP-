#include <stdio.h>

int main() {

    float zancada, npasos;
    float resultado;

    scanf("%f", &zancada);
    scanf("%f", &npasos);

    zancada = zancada/1000;
    resultado = zancada*npasos;

    printf("%.1f", resultado);


    return 0;
}
