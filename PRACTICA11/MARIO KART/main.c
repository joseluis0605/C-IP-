#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "math.h"

struct personaje{
    char nombre[250];
    int peso;
    float habilidad;
};
typedef struct personaje personaje;

struct coche{
    char nombre[250];
    int velocidad;
    int aceleracion;
};
typedef struct coche coche;

struct combinacion{
    char nombrePersonaje[250];
    char nombreCoche[250];
    int velocidad;
    float aceleracion;
    int sumatorio;
};

void introducirPersonajes(int numeroPersonajes, struct personaje listaPersonaje[]);

void introducirCoches(int numeroCoches, struct coche listadoCoche[]);

typedef struct combinacion combinacion;


int main() {

    //velocidad total = velocidad del coche / peso personaje
    //aceleracion = ceil habilidad * aceleracion

    int numeroCoches, numeroPersonajes;
    scanf("%d %d", &numeroPersonajes,&numeroCoches);

    //creamos los arrays
    personaje listaPersonajes[numeroPersonajes];
    coche listaCoche[numeroCoches];
    combinacion listaTotal[(int)pow(numeroPersonajes, numeroCoches)];

    introducirPersonajes(numeroPersonajes, listaPersonajes);
    introducirCoches(numeroCoches, listaCoche);


    //vamos a recorrer los personajes y en otro for dentro los coche y los vamos añadiendo al array de combinacion
    int index=0;
    for (int i = 0; i < numeroPersonajes; ++i) {
        for (int j = 0; j < numeroCoches; ++j) {
            strcpy(listaTotal[index].nombrePersonaje, listaPersonajes[i].nombre);
            strcpy(listaTotal[index].nombreCoche, listaCoche[j].nombre);
            listaTotal[index].velocidad = listaCoche[j].velocidad / listaPersonajes[i].peso;
            listaTotal[index].aceleracion = ceil(listaPersonajes[i].habilidad * listaCoche[j].aceleracion);

            listaTotal[index].sumatorio = listaTotal[index].aceleracion + listaTotal[index].velocidad;
            index++;
        }
    }

    int mayor = listaTotal[0].sumatorio;
    int indiceMayor = 0;
    for (int i = 0; i < index; ++i) {
        if (mayor < listaTotal[i].sumatorio){
            indiceMayor = i;
            mayor = listaTotal[i].sumatorio;
        }

    }
    printf("%s %s %d", listaTotal[indiceMayor].nombrePersonaje, listaTotal[indiceMayor].nombreCoche, mayor);


    return 0;
}

void introducirCoches(int numeroCoches, struct coche listadoCoche[]) {
    for (int i = 0; i < numeroCoches; ++i) {
        scanf("%s", listadoCoche[i].nombre);
        scanf("%d", &listadoCoche[i].velocidad);
        scanf("%d", &listadoCoche[i].aceleracion);
    }
}

void introducirPersonajes(int numeroPersonajes, struct personaje listaPersonaje[]) {
    for (int i = 0; i < numeroPersonajes; ++i) {
        scanf("%s", listaPersonaje[i].nombre);
        scanf("%d", &listaPersonaje[i].peso);
        scanf("%f", &listaPersonaje[i].habilidad);
    }
}
/*
 2 2
Mario 40 0.8
Peach 38 0.9
Tri-Speeder 100 40
Koopaclown 100 35
 */