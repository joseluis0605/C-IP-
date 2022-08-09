#include <stdio.h>
#include "string.h"

int fractales(int lado, int amplificador){

    if(lado==1){
        return lado*amplificador*3;
    } else{
        return lado*amplificador*3+ fractales(lado/2, amplificador*3);
    }

}


int main() {

    int numero, amplificador =1;

    scanf("%d", &numero);
    printf("%d", fractales(numero, amplificador));


    return 0;
}
