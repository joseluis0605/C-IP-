#include <stdio.h>

int main() {

    int njugador,activado;
    char color;
    scanf("%d %c %d", &njugador, &color, &activado);


    if (color=='r' && activado){
        printf("Jugador %d ELIMINADO", njugador);
    } else{
        printf("Jugador %d CONTINUAR", njugador);
    }





    return 0;
}
