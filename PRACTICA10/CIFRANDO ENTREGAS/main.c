#include <stdio.h>
#include "string.h"
#include "stdlib.h"

void intercambio(char cadena[100][250], int x1, int y1, int x2, int y2){
    char aux = cadena[x1][y1];
    cadena[x1][y1] =  cadena[x2][y2];
    cadena[x2][y2]= aux;
}
void invertir (char cadena[100][250], int fila,int inicio, int fin){
    if (inicio<fin){
        char aux = cadena[fila][inicio];
        cadena[fila][inicio] = cadena[fila][fin];
        cadena[fila][fin] = aux;
        invertir(cadena, fila, inicio+1, fin-1);
    }
}

void imprimir (char cadena[100][250], int longitud){
    for (int i=0;i<longitud;i++){
        printf("%s\n", cadena[i]);
    }
}

int main() {

    char cadena[100][250];
    char frase[250];
    int contador = 0;

    do {
        scanf("%s", frase);

        if (strcmp(frase, "FIN")!=0){
            strcpy(cadena[contador], frase);
            contador++;
        }
    } while (strcmp(frase, "FIN")!=0);

    int numeroOperaciones;
    int x1, y1, x2, y2;
    int fila;
    int longitud;
    scanf("%d", &numeroOperaciones);

    for (int i=0;i<numeroOperaciones;i++){
        int tipoOperacion;
        scanf("%d", &tipoOperacion);

        switch (tipoOperacion) {
            case 0:

                scanf("%d %d", &x1, &y1);
                scanf("%d %d", &x2, &y2);
                intercambio(cadena, x1,y1, x2,y2);

            break;
            case 1:
                scanf("%d", &fila);
                if (fila < contador){
                    longitud = strlen(cadena[fila]);
                    if (strlen(cadena[fila])>0){
                        invertir(cadena, fila, 0, longitud-1);
                    }
                }


            break;

        }
    }

    imprimir(cadena, contador);
    return 0;
}
