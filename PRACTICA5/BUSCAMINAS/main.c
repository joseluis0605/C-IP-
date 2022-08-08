#include <stdio.h>

int main() {

    int fila, columna;
    scanf("%d %d", &fila, &columna);

    int matriz[fila][columna];
    for (int i=0;i<fila;i++){
        for (int (j) = 0; (j) < columna; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int numeroMovimientos;
    scanf("%d", &numeroMovimientos);
    int encontrado=0;
    int indice=0;

    while (indice<numeroMovimientos && !encontrado){
        int x, y;
        scanf("%d %d", &x,&y);
        encontrado = matriz[x][y]==1;
        if(encontrado==1){
            printf("BOOM\n");
        }
        indice++;
    }
    if (encontrado==0){
        printf("A SALVO\n");
    }
    return 0;
}
