#include <stdio.h>
#include "string.h"
int main() {

    int numeroFrase;
    scanf("%d ", &numeroFrase);

    for (int i=0;i<numeroFrase;i++){
        char cadena[250];
        gets(cadena);
        int longitud = strlen(cadena);
        int fin = longitud-1;
        for (int j=0;j< longitud/2;j++){
            char aux = cadena[j];
            cadena[j]=cadena[fin];
            cadena[fin] = aux;
            fin--;
        }
        printf("%s\n", cadena);
    }



    return 0;
}
