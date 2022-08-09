#include <stdio.h>
#include "string.h"
#include "stdlib.h"

struct regalo{
    char nombre[250];
    int alto;
    int largo;
    int ancho;
};
typedef struct regalo regalo;

void insertarListado (regalo catalogo[], int numeroRegalos);

int calculadorDeVolumen(regalo catalogo[], int index);

int main() {

    int numeroRegalos;
    scanf("%d", &numeroRegalos);

    regalo catalogo[numeroRegalos];

    insertarListado(catalogo, numeroRegalos);

    int volumenTotal;
    scanf("%d", &volumenTotal);

    int contador=0, seHanPasado=0, index=0;

    while (index<numeroRegalos && !seHanPasado){
        contador = contador + calculadorDeVolumen(catalogo, index);
        if (contador>volumenTotal){
            seHanPasado = 1;
        } else{
            index++;
        }
    }

    if (seHanPasado){
        int sobran=numeroRegalos - index;
        printf("SOBRAN %d REGALOS\n", sobran);

        for(int i=index;i<numeroRegalos;i++){
            printf("%s\n", catalogo[i].nombre);
        }
    } else{
        printf("CONSEGUIDO\n");
    }


    return 0;
}

int calculadorDeVolumen(regalo catalogo[], int index) {
    return catalogo[index].alto*catalogo[index].ancho*catalogo[index].largo;
}

void insertarListado (regalo catalogo[], int numeroRegalos){
    for (int i=0;i<numeroRegalos;i++){
        scanf("%s", catalogo[i].nombre);
        scanf("%d", &catalogo[i].largo);
        scanf("%d", &catalogo[i].ancho);
        scanf("%d", &catalogo[i].alto);
    }
}