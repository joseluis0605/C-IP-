#include <stdio.h>

int main() {

    int nCanicas1 = 10, nCanicas2 = 10;
    char caracter;
    int apuesta;

    while (nCanicas1 > 0 && nCanicas2>0){
        scanf("%d", &apuesta);
        scanf(" %c", &caracter);

        //jugador 1 empieza
        if (caracter == 'I'){
            //si acierta
            if (apuesta % 2 != 0){
                nCanicas2 = nCanicas2 + apuesta;
                nCanicas1 = nCanicas1 - apuesta;
            } else{
                //si NO acierta
                nCanicas1 = nCanicas1 + apuesta;
                nCanicas2 = nCanicas2 - apuesta;
            }
        } else if (caracter == 'P'){
            if (apuesta % 2 == 0){
                nCanicas2 = nCanicas2 + apuesta;
                nCanicas1 = nCanicas1 - apuesta;
            } else{
                nCanicas1 = nCanicas1 + apuesta;
                nCanicas2 = nCanicas2 - apuesta;
            }
        }

        //jugador 2 empieza
        if (nCanicas1 > 0 && nCanicas2>0){
            scanf("%d", &apuesta);
            scanf(" %c", &caracter);

            if (caracter == 'I'){
                //si acierta
                if (apuesta % 2 != 0){
                    nCanicas1 = nCanicas1 + apuesta;
                    nCanicas2 = nCanicas2 - apuesta;
                } else{
                    //si NO acierta
                    nCanicas2 = nCanicas2 + apuesta;
                    nCanicas1 = nCanicas1 - apuesta;
                }
            } else if (caracter == 'P'){
                if (apuesta % 2 == 0){
                    nCanicas1 = nCanicas1 + apuesta;
                    nCanicas2 = nCanicas2 - apuesta;
                } else{
                    nCanicas2 = nCanicas2 + apuesta;
                    nCanicas1 = nCanicas1 - apuesta;
                }
            }
        }

    }
    if (nCanicas1 == 0){
        printf("JUGADOR 1 ELIMINADO");
    } else{
        printf("JUGADOR 2 ELIMINADO");
    }





    return 0;
}
