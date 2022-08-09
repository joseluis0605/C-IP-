#include <stdio.h>
#include "stdlib.h"
int main() {

    int *array = malloc(sizeof (int)*20000);
    int indice = 0;
    int numero;

    do {
        scanf("%d", &numero);
        if (numero!=-1){
            array[indice]=numero;
            indice++;
        }
    } while (numero!=-1);


    int introducido;

    do {
        int  limiteSuperior = indice, limiteInferior = 0, medio=limiteSuperior/2;
        scanf("%d", &introducido);
        int encontrado=0;

        if (introducido!=-1){
            while (!encontrado){
                if(array[medio]==introducido){
                    printf("%d\n", medio);
                    encontrado=1;
                } else{
                    if (introducido < array[medio]){
                        limiteSuperior = medio;
                    } else{
                        limiteInferior=medio;
                    }
                }
                medio = (limiteSuperior+limiteInferior)/2;
            }
        }

    } while (introducido!=-1);




    free(array);
    return 0;
}
