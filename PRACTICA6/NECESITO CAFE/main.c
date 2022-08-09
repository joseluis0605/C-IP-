#include <stdio.h>

int main() {

    int tam;
    scanf("%d", &tam);
    int maxCafe;
    scanf("%d", &maxCafe);

    int matriz[tam][tam];

    for (int i = 0; i < tam; i++) {
        for (int j=0;j<tam;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int sumatorio = 0;
    int numeroPedidos;
    scanf("%d", &numeroPedidos);


    for (int i = 0; i < numeroPedidos; i++) {
        int x,y;
        scanf("%d %d", &x, &y);
        sumatorio =sumatorio +matriz[x][y];
    }

    int total = maxCafe - sumatorio;
    if (total<0){
        total  = total * -1;
        printf("FALTAN %d CAFES", total);
    } else{
        printf("CAPACIDAD CUBIERTA");
    }




    return 0;
}
