#include <stdio.h>
#include "string.h"
#include "stdlib.h"

void imprimimos(int **matriz, int dimension) {
    for (int i = 0; i < dimension; ++i) {
        for (int j = 0; j < dimension; ++j) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}


int main() {

    int dimension;
    scanf("%d", &dimension);
    int matriz[dimension][dimension];

    int contador= dimension*dimension;
    int indice= 0;
    int medio = dimension/2;
    int nivelMax= dimension-medio;
    int limiteSuperior= 0, limiteInferior= dimension-1, limiteIzquierda=0, limiteDerecha=dimension-1;

    int index;
    while (nivelMax != 0){

        //vamos de izquierda a derecha
        index= limiteIzquierda;
        while (index<=limiteDerecha){
            matriz[limiteSuperior][index]=nivelMax;
            index++;
            indice++;
        }
        limiteSuperior++;

        //arriba a abajo en la derecha
        index=limiteSuperior;
        while (index <= limiteInferior){
            matriz[index][limiteDerecha]=nivelMax;
            index++;
            indice++;
        }
        limiteDerecha--;


        //derecha a izquierda abajo
        index=limiteDerecha;
        while (index>=limiteIzquierda){
            matriz[limiteInferior][index]=nivelMax;
            index--;
            indice++;
        }
        limiteInferior--;

        //de abajo a arriba en la izquierda
        index=limiteInferior;
        while (index>=limiteSuperior){
            matriz[index][limiteIzquierda]=nivelMax;
            index--;
            indice++;
        }
        limiteIzquierda++;

        nivelMax--;
    }


    for (int i = 0; i < dimension; ++i) {
        for (int j = 0; j < dimension; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }




    return 0;
}
/*
[0,0] [0,1] [0,2] [0,3] [0,4]
[1,0] [1,1] [1,2] [1,3] [1,4]
[2,0] [2,1] [2,2] [2,3] [2,4]
[3,0] [3,1] [3,2] [3,3] [3,4]
[4,0] [4,1] [4,2] [4,3] [4,4]

[0,0] [0,1] [0,2] [0,3] [0,4] [0,5]
[1,0] [1,1] [1,2] [1,3] [1,4] [1,5]
[2,0] [2,1] [2,2] [2,3] [2,4] [2,5]
[3,0] [3,1] [3,2] [3,3] [3,4] [3,5]
[4,0] [4,1] [4,2] [4,3] [4,4] [4,5]
[5,0] [5,1] [5,2] [5,3] [5,4] [5,5]
 */