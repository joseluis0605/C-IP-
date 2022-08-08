#include <stdio.h>

int main() {

    int identificadorPez1=0, identificadorPez2=0,puntuacionPez1=0, puntuacionPez2=0;
    int sumaTotal = 0;

    int ncapturas,  identificador, puntuacion;
    scanf("%d", &ncapturas);



    for (int j=0;j<ncapturas;j++){
        scanf("%d", &identificador);
        scanf("%d", &puntuacion);

        //sea el mayor de todos
        if (puntuacion > puntuacionPez1){
            identificadorPez2 = identificadorPez1;
            puntuacionPez2 = puntuacionPez1;

            puntuacionPez1 = puntuacion;
            identificadorPez1 = identificador;
        } else if (puntuacion < puntuacionPez1 && puntuacion > puntuacionPez2){
            puntuacionPez2 = puntuacion;
            identificadorPez2 = identificador;
        }
    }

    sumaTotal = puntuacionPez1 + puntuacionPez2;

    printf("%d %d %d", identificadorPez1, identificadorPez2, sumaTotal);




    return 0;
}
