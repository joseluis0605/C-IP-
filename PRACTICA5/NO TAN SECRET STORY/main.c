#include <stdio.h>
#include "string.h"
int main() {

    int planta, numeroHabitaciones, numeroParticipantes, numeroIntercambios, x1, y1,x2,y2;
    scanf("%d %d", &planta, &numeroHabitaciones);

    int matriz[planta][numeroHabitaciones];

    scanf("%d", &numeroParticipantes);
    scanf("%d", &numeroIntercambios);


    for (int i=0;i<planta;i++){
        for (int j=0;j<numeroHabitaciones;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i=0;i<numeroIntercambios;i++){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int aux =matriz[x1][y1];
        matriz[x1][y1] = matriz[x2][y2];
        matriz[x2][y2]=aux;
    }

    for (int i=0;i<planta;i++){
        for (int j=0;j<numeroHabitaciones;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }




    return 0;
}
