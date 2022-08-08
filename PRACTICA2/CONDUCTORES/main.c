#include <stdio.h>

int main() {

    int horasConductor, duracionViaje, limiteHoras;
    scanf("%d %d %d", &horasConductor, &duracionViaje, &limiteHoras);


    int sumatorio, resultado;
    sumatorio = horasConductor + duracionViaje;

    if (sumatorio <= limiteHoras){
        resultado = limiteHoras - sumatorio;
        printf("SI %d", resultado);
    } else{
        resultado = sumatorio - limiteHoras;
        printf("NO %d", resultado);
    }



    return 0;
}
