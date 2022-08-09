#include <stdio.h>
int main() {
    int matriz[9][9];
    for (int i=0;i<9;i++){
        for (int j=0;j<9;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int vecesRepetido = 0;
    int noPosible = 0;
    for (int i=0;i<9;i++){
        for (int j=0;j<9;j++){
            int posicion = matriz[i][j];
            for (int x=0; x<9;x++){
                if (matriz[i][x] == posicion){
                    vecesRepetido++;
                }
            }
            for (int x=0; x<9;x++){
                if (matriz[x][j] == posicion){
                    vecesRepetido++;
                }
            }
            if (vecesRepetido>2){
                noPosible =1;
            }
            vecesRepetido=0;
        }
    }
    if (noPosible==0){
        printf("CORRECTO\n");
    } else {
        printf("INCORRECTO\n");
    }
    return 0;
}