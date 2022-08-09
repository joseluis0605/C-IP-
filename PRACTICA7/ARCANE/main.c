#include <stdio.h>

void inicializar (int array[], int numero){
    for(int i=0;i<numero;i++){
        array[i]=0;
    }
}

void mayorIndex (int puntuacionesRonda[], int numero, int *index, int *mayor){
    (*mayor) = puntuacionesRonda[0];
    *index=0;
    for (int i=0;i<numero;i++){
        if (*mayor<puntuacionesRonda[i]){
            *mayor = puntuacionesRonda[i];
            *index = i;
        }
    }
}
void menorIndex (int puntuacionesRonda[], int numero, int *index, int *menor){
    (*menor) = puntuacionesRonda[0];
    *index = 0;
    for (int i=0;i<numero;i++){
        if (*menor>puntuacionesRonda[i]){
            *menor = puntuacionesRonda[i];
            *index = i;
        }
    }
}

void imprimir (int array[], int numero, int index){
    switch (index) {
        case 0:
            printf("%d POWDER\n", array[index]);
        break;
        case 1:
            printf("%d VI\n", array[index]);
        break;
        case 2:
            printf("%d MYLO\n", array[index]);
        break;
        case 3:
            printf("%d CLAGGOR\n", array[index]);
        break;
        default:
            printf("error");
        break;
    }
}
void imprimirResultado (int array[], int numero, int index){
    switch (index) {
        case 0:
            printf(" POWDER %d\n", array[index]);
            break;
        case 1:
            printf(" VI %d\n", array[index]);
            break;
        case 2:
            printf(" MYLO %d\n", array[index]);
            break;
        case 3:
            printf(" CLAGGOR %d\n", array[index]);
            break;
        default:
            printf("error");
            break;
    }
}




int main() {


    int puntuaciones;
    scanf("%d", &puntuaciones);

    int puntuacionRonda[4];
    int sumatorio[4];
    int mayor, index, menor;

    inicializar(sumatorio,4);

    for (int i=0;i<puntuaciones;i++){
        for (int j=0;j<4;j++){
            scanf("%d", &puntuacionRonda[j]);
            sumatorio[j] = sumatorio[j]+ puntuacionRonda[j];
        }
        menorIndex(puntuacionRonda,4,&index, &menor);
        imprimir(puntuacionRonda, 4, index);

        index=0;

        mayorIndex(puntuacionRonda, 4, &index, &mayor);
        imprimir(puntuacionRonda, 4, index);
    }

    mayorIndex(sumatorio, 4, &index, &mayor);
    imprimirResultado(sumatorio,4, index);

    return 0;
}
