#include <stdio.h>

int main() {


    int numeroBolosCaidos;
    scanf("%d", &numeroBolosCaidos);

    int bolosCaidos[numeroBolosCaidos];
    for (int i = 0; i < numeroBolosCaidos; i++) {
        scanf("%d", &bolosCaidos[i]);
    }
    int numeroEspacios = 0;
    int primerNumero = 7;
    int ronda=4;
    int resto = 7;



    for (int i=0;i<4;i++){

        for(int j=0;j<numeroEspacios;j++){
            printf(" ");
        }
        numeroEspacios++;

        for (int j=0;j<ronda;j++){
            int encontrado = 0;
            int index = 0;
            while (index<numeroBolosCaidos && !encontrado){
                if (bolosCaidos[index]==primerNumero){
                    encontrado=1;
                }
                index++;

            }
            if (encontrado){
                printf("X ");
            } else{
                printf("%d ", primerNumero);
            }
            if (primerNumero<11){
                primerNumero++;
            }


        }
        printf("\n");
        primerNumero=primerNumero-resto;


        resto = resto -2;
        ronda--;


    }


    return 0;
}
