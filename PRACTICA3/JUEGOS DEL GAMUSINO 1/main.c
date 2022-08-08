#include <stdio.h>

int main() {

    int tam, actualizador = 1;
    char caracter;

    scanf("%d %c", &tam, &caracter);

    for (int i = 0;i<tam;i++){
        int resta = tam - actualizador;
        for (int j = 0;j<resta; j++){
            printf(" ");
        }
        for (int j = 0;j<actualizador;j++){
            printf("%c", caracter);
        }
        actualizador++;
        printf("\n");
    }




    return 0;
}
