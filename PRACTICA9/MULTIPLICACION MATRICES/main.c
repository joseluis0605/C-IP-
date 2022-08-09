#include <stdio.h>
#include "string.h"
#include "stdlib.h"



int main() {

    int fila1, columna1, fila2, columna2;
    scanf("%d %d", &fila1,&columna1);
    int matriz1[fila1][columna1];
    for (int i = 0; i < fila1; ++i) {
        for (int j = 0; j < columna1; ++j) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    scanf("%d %d", &fila2, &columna2);
    int matriz2[fila2][columna2];
    for (int i = 0; i < fila2; ++i) {
        for (int j = 0; j < columna2; ++j) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    if (columna1 == fila2){
        int matrizResultado[fila1][columna2];
        for (int i = 0; i < fila1; ++i) {
            for (int j = 0; j < columna2; ++j) {
                //hacemos la operacion de sumar
                int sumador=0;
                for (int k = 0; k < columna1; ++k) {
                    int operacion = matriz1[i][k]*matriz2[k][j];
                    sumador = sumador + operacion;
                }
                matrizResultado[i][j]=sumador;
            }
        }
        for (int i = 0; i < fila1; ++i) {
            for (int j = 0; j < columna2; ++j) {
                printf("%d ", matrizResultado[i][j]);
            }
            printf("\n");
        }
    }
	return 0;
}

