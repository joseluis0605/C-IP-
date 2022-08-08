#include <stdio.h>

int main() {

    int tamDibujo;
    char dibujoTriangulo, dibujoFondo;
    scanf("%d %c %c", &tamDibujo, &dibujoTriangulo, &dibujoFondo);

    int puntosLateral = tamDibujo;
    int acuAstericos = 1;
    int dimension = puntosLateral+puntosLateral+1;

    for (int i=0;i<tamDibujo;i++){
        for (int j=0;j<puntosLateral;j++){
            printf("%c", dibujoFondo);
        }
        for (int j = 0; j < acuAstericos; j++) {
            printf("%c", dibujoTriangulo);
        }
        for (int j=0;j<puntosLateral;j++){
            printf("%c", dibujoFondo);
        }
        acuAstericos = acuAstericos + 2;
        puntosLateral--;
        printf("\n");
    }


    return 0;
}
