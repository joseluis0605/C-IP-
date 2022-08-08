#include <stdio.h>

int main() {

    char caracter;
    int tam;

    scanf("%c %d", &caracter, &tam);


    int inicializador;
    int sumador ;

    if (caracter == 'P'){
        sumador = 2;
        inicializador = 2;
    } else{
        sumador = 2;
        inicializador = 1;
    }

    for (int i=0;i<tam;i++){
        for (int j =0 ;j<tam;j++){
            printf("%d ", inicializador);
            inicializador = inicializador + sumador;
        }
        printf("\n");
    }


    return 0;
}
