#include <stdio.h>
#include "string.h"

int mismaLectura (char palabra[250], int inicio, int fin, int veces){
    if (veces>0){
        return palabra[inicio]==palabra[fin] && mismaLectura(palabra, inicio+1, fin-1, veces-1);
    }
    /*else if (strlen(palabra)==0){
        return 0;
    }*/
    else{
        return palabra[inicio]==palabra[fin];
    }
}
int main() {
    int numeroPalabras, contadorAna=0, contadorMonica=0;
    scanf("%d ", &numeroPalabras);
    for (int i=0;i<(numeroPalabras);i++){
        //turno jugador 1
        char palabra[250];
        scanf("%s", palabra);
        int veces = strlen(palabra)/2;
        if (mismaLectura(palabra, 0, strlen(palabra)-1, veces) && (i%2) == 0){
            contadorAna++;
        } else if (mismaLectura(palabra, 0, strlen(palabra)-1, veces) && (i%2) != 0){
            contadorMonica++;
        }
    }
    if (contadorAna>contadorMonica){
        printf("%d %d ANA", contadorAna, contadorMonica);
    } else if (contadorMonica>contadorAna){
        printf("%d %d MONICA", contadorAna, contadorMonica);
    } else{
        printf("%d %d EMPATE", contadorAna, contadorMonica);
    }
    return 0;
}