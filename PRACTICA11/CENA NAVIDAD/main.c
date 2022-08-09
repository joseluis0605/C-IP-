#include <stdio.h>
#include "string.h"
#include "stdlib.h"

struct producto{
    char nombre[250];
    int indiceCalidad;
    float precio;
};
typedef struct producto producto;

void introducirDatos(int productos, producto revista[]);


int main() {

    int casosPrueba, numeroProductos, minimoCalidad;
    int presupuesto;
    scanf("%d", &casosPrueba);

    for (int i = 0; i < casosPrueba; i++) {
        scanf("%d %d %d", &numeroProductos,&minimoCalidad,&presupuesto);
        producto revista[numeroProductos];

        //introducimos los datos en el catalogo de productos
        introducirDatos(numeroProductos, revista);

        float acumulador = 0, calidadMedia = 0;
        int contador = 0;

        for (int j=0;j<numeroProductos;j++){
            if(minimoCalidad<=revista[j].indiceCalidad){
                acumulador = acumulador + revista[j].precio;
                if (acumulador < (float )presupuesto){
                    printf("%s\n", revista[j].nombre);
                    contador++;
                    calidadMedia =calidadMedia +(float)revista[j].indiceCalidad;
                } else{
                    acumulador = acumulador - revista[j].precio;
                }
            }
        }
        calidadMedia = calidadMedia/(float)contador;
        printf("%.1f %.1f", acumulador, calidadMedia);

    }



    return 0;
}

void introducirDatos(int productos, producto revista[]) {
    for (int i = 0; i < productos; i++) {
        scanf("%s", revista[i].nombre);
        scanf("%f", &revista[i].precio);
        scanf("%d", &revista[i].indiceCalidad);
    }
}
