#include <stdio.h>
int saltos (int dimension, int x, int y, int  movimientoX, int movimientoY){
    if(x +movimientoX > dimension-1 || x + movimientoX<0 || y+movimientoY>dimension-1 || y+movimientoY<0){
        return 0;
    } else{
        return 1 + saltos(dimension, x + movimientoX, y+movimientoY, movimientoX, movimientoY);
    }
}
int main() {

    int dimension, x, y;
    scanf("%d", &dimension);
    //inicio
    scanf("%d %d", &x, &y);
    int movimientoX, movimientoY;
    scanf("%d %d", &movimientoX, &movimientoY);

    printf("%d", saltos(dimension, x, y, movimientoX, movimientoY));

    return 0;
}
