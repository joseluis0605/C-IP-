#include <stdio.h>

int main() {

    int numero, sumatorio = 0;

    do {
        scanf("%d", &numero);
        if (numero >-1){
            sumatorio = sumatorio + numero;
        }
    } while (numero > -1);

    printf("%d", sumatorio);


    return 0;
}
