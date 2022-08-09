#include <stdio.h>
#include "string.h"

int numeroCaracteres(char cadena[], char caracter[], int pos, int resultado){
    if (pos <= strlen(cadena)){
        if (cadena[pos]== caracter){
           return numeroCaracteres(cadena, caracter, pos+1, resultado+1);
        } else{
            return numeroCaracteres(cadena,caracter, pos+1, resultado+0);
        }
    } else{
        return resultado;
    }
}


int main() {

    char cadena[250], caracter;
    int pos=0, contador=0;
    scanf("%s ", cadena);
    scanf("%c", &caracter);

    printf("%d", numeroCaracteres(cadena, caracter,pos, contador));



    return 0;
}
