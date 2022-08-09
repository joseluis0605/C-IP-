#include <stdio.h>

struct jugador{
    int puntosAtaques;
    int puntosConseguidos;
};
typedef struct jugador jugador;

void inicializar (jugador team[], int numeroJugadores){
    for (int i = 0; i < numeroJugadores; i++) {
        team[i].puntosConseguidos=0;
    }
}

void insertar (jugador team[], int numeroJugadores){
    for (int i=0;i<numeroJugadores;i++){
        scanf("%d", &team[i].puntosAtaques);
    }
}
int index (jugador team[], int numeroJugadores){
    int max = team[0].puntosConseguidos;
    int indice=0;
    for (int i=0;i<numeroJugadores;i++){
        if (max < team[i].puntosConseguidos){
            max = team[i].puntosConseguidos;
            indice = i;
        }
    }
    return indice;
}

int main() {

    int numeroJugadores, numeroDeAtaques, equipoAtacante, posAtacante, posDefensor;
    scanf("%d", &numeroJugadores);
    int acumulador0=0, acumulador1=0;
    struct jugador team0[numeroJugadores], team1[numeroJugadores];

    //inicializamos el contador de puntos conseguidos
    inicializar(team0,numeroJugadores);
    inicializar(team1, numeroJugadores);

    //insertamos array de structs
    insertar(team0, numeroJugadores);
    insertar(team1, numeroJugadores);


    scanf("%d", &numeroDeAtaques);


    for (int i=0;i<numeroDeAtaques;i++){
        scanf("%d %d %d", &equipoAtacante, &posAtacante, &posDefensor);
        if (equipoAtacante==0){
            team0[posAtacante].puntosConseguidos=team0[posAtacante].puntosConseguidos+team0[posAtacante].puntosAtaques;
            acumulador0 = acumulador0 + team0[posAtacante].puntosAtaques;
        } else if(equipoAtacante==1){
            team1[posAtacante].puntosConseguidos=team1[posAtacante].puntosConseguidos+team1[posAtacante].puntosAtaques;
            acumulador1 = acumulador1 + team1[posAtacante].puntosAtaques;
        } else{
            printf("ERROR\n");
        }
    }

    if (acumulador0 > acumulador1){
        int indice = index(team0, numeroJugadores);
        printf("0 %d %d", acumulador0, indice);
    } else{
        int indice = index(team1, numeroJugadores);
        printf("1 %d %d", acumulador1, indice);
    }




    return 0;
}
