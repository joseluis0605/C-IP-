#include <stdio.h>
#include "string.h"
#include "stdlib.h"

int main() {

    int fila, columna;
    scanf("%d %d", &fila, &columna);

    int **tablero = (int**) malloc(sizeof (int*)*fila);

    for (int i = 0; i < fila; i++) {
        tablero[i] = (int*) malloc(sizeof (int)*columna);
    }

    //insertamos
    for (int i = 0; i < fila;i++) {
        for (int j = 0; j < columna; j++) {
            scanf("%d", &tablero[i][j]);
        }
    }

    int x, y, acumulador=0;

    do {
        scanf("%d", &x);
        scanf("%d", &y);
        if (x>= 0 && y>=0){
            acumulador = acumulador + tablero[x][y];
        }
    } while (x>= 0 && y>=0);

    printf("%d", acumulador);

    for (int i = 0; i < fila; i++) {
        free(tablero[i]);
    }
    free(tablero);

    return 0;
}
