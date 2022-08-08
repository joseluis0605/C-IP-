#include <stdio.h>

int main() {

    int dimension;
    scanf("%d ", &dimension);
    int matriz[dimension][dimension];



    int numeroTesoros;
    scanf("%d", &numeroTesoros);

    for (int i=0;i<dimension;i++){
        for (int j=0;j<dimension;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int contadorTesoros =0, numeroPosicionesRecorridas;
    scanf("%d", &numeroPosicionesRecorridas);

    for (int i=0;i<numeroPosicionesRecorridas;i++){
        int x, y;
        scanf("%d %d",&x,&y);
        if (matriz[x][y]==1){
            contadorTesoros++;
        }
    }
    if (contadorTesoros == numeroTesoros){
        printf("VICTORIA\n");
    } else{
        printf("DERROTA\n");
    }







    return 0;
}
