#include <stdio.h>
#include "string.h"

void posicion (int array[], int inicio, int fin, int buscado, int medio){
    if (array[medio]==buscado){
        printf("%d ", medio);
    } else{
        //nos vamos a la derecha
        if(array[medio]<buscado){
            inicio = medio;
            medio = (inicio+fin)/2;
            posicion(array, inicio, fin, buscado, medio);
        } else{
            //nos vamos para la izquierda
            fin = medio;
            medio = (inicio+fin)/2;
            posicion(array, inicio, fin, buscado, medio);
        }
    }
}
void introducirDatos(int dimension, int listado[]);

int main() {

    int dimension;
    scanf("%d", &dimension);
    int array[dimension];
    introducirDatos(dimension, array);

    int numeroPruebas;
    scanf("%d", &numeroPruebas);
    for (int i = 0; i < numeroPruebas; ++i) {
        int numero;
        scanf("%d", &numero);
        int medios = (dimension-1)/2;
        posicion(array,0, dimension, numero,medios);
    }


    return 0;
}

void introducirDatos(int dimension, int listado[]) {
    for (int i = 0; i < dimension; ++i) {
        scanf("%d", &listado[i]);
    }
}
/*
 5
88 110 194 208 380
 2
88 208
 */