#include <stdio.h>
#include "string.h"
#include "stdlib.h"

struct pelicula{
    char nombre[250];
    int edadMinima;
    int duracion;
};
typedef struct pelicula pelicula;

void insertarPeliculas(pelicula listado[], int numeroPeliculas);
void introducirEdades(int edad[], int numeroPersonas);

int main() {

    int numeroPeliculas;
    scanf("%d", &numeroPeliculas);

    pelicula listado[numeroPeliculas];

    insertarPeliculas(listado, numeroPeliculas);

    int numeroPersonas;
    scanf("%d", &numeroPersonas);

    //introducimos las edades
    int edad[numeroPersonas];
    introducirEdades(edad, numeroPersonas);

    //introducimos la pelicula que queremos ver
    char  nombrePelicula[250];
    scanf("%s", nombrePelicula);
    int estaEnLaEdad=1;
    int index = 0;

    for (int i = 0; i < numeroPeliculas; i++) {
        if (strcmp(listado[i].nombre, nombrePelicula)==0){
            while (index<numeroPersonas && estaEnLaEdad){
                if (edad[index]<listado[i].edadMinima){
                    estaEnLaEdad=0;
                } else{
                    index++;
                }
            }
        }
    }


    if (estaEnLaEdad){
        int duracionPelicula;
        for (int i=0;i<numeroPeliculas;i++){
            if (strcmp(listado[i].nombre, nombrePelicula)==0){
                duracionPelicula = listado[i].duracion;
            }
        }
        printf("PUEDES VER LA PELICULA %s %d\n", nombrePelicula, duracionPelicula);
    } else{
        index--;
        printf("NO PUEDES VER LA PELICULA %s: ES PARA MAYORES DE %d\n", listado[index].nombre, listado[index].edadMinima);
    }



    return 0;
}

void introducirEdades(int edad[], int numeroPersonas) {
    for (int i = 0; i < numeroPersonas; i++) {
        scanf("%d", &edad[i]);
    }
}

void insertarPeliculas(pelicula listado[], int numeroPeliculas){
    for (int i = 0; i < numeroPeliculas; i++) {
        scanf("%s", listado[i].nombre);
        scanf("%d", &listado[i].edadMinima);
        scanf("%d", &listado[i].duracion);
    }
}