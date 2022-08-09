#include <stdio.h>
#include "string.h"
int palindromo(char cadena[100], int inicio, int final){
    if(final-inicio==1 || final==inicio){
        return 1;
    }
    else{
        if(cadena[inicio]==cadena[final]){
            return palindromo(cadena,inicio+1,final-1);
        }
        else{
            return 0;
        }
    }
}
int main() {
    int numeroPalabras, contadorAna=0, contadorMonica=0;
    scanf("%d ", &numeroPalabras);
    for (int i=0;i<(numeroPalabras);i++){
        //turno jugador 1
        char palabra[250];
        gets( palabra);
        int veces = strlen(palabra)/2;
        if (palindromo(palabra, 0, strlen(palabra)-1 ) && i%2==0){
            contadorAna++;
        } else if (palindromo(palabra, 0, strlen(palabra)-1 ) && i%2!=0){
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
