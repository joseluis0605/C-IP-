#include <stdio.h>

int main() {

    int ml, poblacion;
    scanf("%d", &ml);
    scanf("%d", &poblacion);

    int aux;
    poblacion = poblacion *1000000;
    aux = ml * poblacion;
    aux = aux / 2000;

    printf("%d", aux);

    return 0;
}
