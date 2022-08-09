#include <stdio.h>

int main() {

    int fila, columna;
    scanf("%d %d", &fila, &columna);
    int matriz[fila][columna];

    for(int i=0;i<fila;i++){
        for (int j=0;j<columna;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int localizacionTesoro;
    scanf("%d", &localizacionTesoro);

    for(int i=0;i<fila;i++){
        for (int j=0;j<columna;j++){
            if (matriz[i][j]==localizacionTesoro){
                printf("%d %d \n", i,j);
            }
        }
    }




    return 0;
}
