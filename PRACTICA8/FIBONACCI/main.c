#include <stdio.h>

int numeroHojas(int numero, int contador, int primero, int segundo, int resultado){

    if (numero==0){
        return 1;
    } else{
        if (contador == 0){
            return numero;
        } else{
            resultado = primero + segundo;
            return numeroHojas(resultado, contador-1, segundo, resultado, resultado);
        }
    }





}


int main() {


    int numeroVeces;
    scanf("%d", &numeroVeces);

    for (int i=0;i<numeroVeces;i++){
        int parte;
        scanf("%d", &parte);
        printf("%d\n", numeroHojas(parte,parte,0,1,0));
    }


    return 0;
}
