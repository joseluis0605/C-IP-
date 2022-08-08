#include <stdio.h>

int main() {

    int nFilas, actualizador = 1, colocador =1;
    scanf("%d", &nFilas);

    for (int i=0;i<nFilas;i++){
        if (actualizador % 2 != 0){
            colocador =1;
        } else{
            colocador = 0;
        }
        for (int j=0;j<actualizador;j++){
            printf("%d", colocador);
            if (colocador ==0){
                colocador=1;
            } else{
                colocador=0;
            }
        }
        actualizador++;
        printf("\n");
    }



    return 0;
}
