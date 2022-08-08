#include <stdio.h>

int main() {

    char caracter;
    int contadorN = 0;
    int contadorW = 0;

    do {
        scanf(" %c", &caracter);
        if (caracter=='W'){
            contadorW++;
        } else if (caracter == 'N'){
            contadorN++;
        }
    } while (caracter=='W' || caracter=='N');

    printf("%d %d\n", contadorW, contadorN);
    if (contadorN > contadorW){
        printf("NAOR");
    } else{
        printf("WATOS");
    }

    return 0;
}
