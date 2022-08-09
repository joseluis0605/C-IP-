#include <stdio.h>
#include "string.h"
#include "stdlib.h"

struct personaje{
    int puntoVida;//PV
    int ataqueFisico;//PA
    int ataqueMagico;//PM
};
struct enemigo{
    float puntoVida;//EV
    int ataque;//EA
    float resistenciaFisica;//EF
    float resistenciaMagica;//EM
};
typedef struct personaje personaje;
typedef struct enemigo enemigo;

void insertarEnemigo(enemigo *rivales);
float danoAtaque(personaje seleccionado[], enemigo turno, int jugador);
void insertarEquipo(personaje equipo[]);

int main() {

    personaje equipo[3];

    //insertamos puntuacion de mi equipo
    insertarEquipo(equipo);

    //introducimos numero enemigos y metemos sus puntuaciones

    int numeroEnemigos;
    scanf("%d", &numeroEnemigos);

    enemigo rivales;
    int contadorVictorias = 0;

    for (int i = 0; i < numeroEnemigos; i++) {
        insertarEnemigo(&rivales);

        int numeroAtaques;
        scanf("%d", &numeroAtaques);

        for (int j = 0; j < numeroAtaques; j++) {
            int jugadorAtacante;
            scanf("%d", &jugadorAtacante);

            if (equipo[jugadorAtacante].puntoVida>0 && rivales.puntoVida>0){
                float puntuacion = danoAtaque(equipo, rivales, jugadorAtacante);
                if (rivales.puntoVida < puntuacion){
                    contadorVictorias++;
                }
                rivales.puntoVida =(float ) rivales.puntoVida - puntuacion;
                if (rivales.puntoVida>0){
                    equipo[jugadorAtacante].puntoVida = equipo[jugadorAtacante].puntoVida-rivales.ataque;
                }
            }
        }
    }
    printf("%d", contadorVictorias);

    return 0;
}

float danoAtaque(personaje seleccionado[], enemigo turno, int jugador){
    float primero =(float ) seleccionado[jugador].ataqueFisico * turno.resistenciaFisica;
    float segundo =(float ) seleccionado[jugador].ataqueMagico * turno.resistenciaMagica;
    return primero + segundo;
}

void insertarEquipo(personaje equipo[]){
    for (int i=0;i<3;i++){
        scanf("%d", &equipo[i].puntoVida);
        scanf("%d", &equipo[i].ataqueFisico);
        scanf("%d", &equipo[i].ataqueMagico);
    }
}

void insertarEnemigo(enemigo *rivales){
    scanf("%f", &rivales->puntoVida);
    scanf("%d", &rivales->ataque);
    scanf("%f", &rivales->resistenciaFisica);
    scanf("%f", &rivales->resistenciaMagica);
}
