#include <stdio.h>

int ordenado(int vector[], int dimension, int *indice){
    int ordenados = 1;
    int index =0;
    while (index<dimension-1 && ordenados){
        if (vector[index]>vector[index+1]){
            ordenados =0;
        } else{
            index++;
        }
    }
    *indice = index+1;
    if (ordenados){
        return 1;
    } else{
        return 0;
    }
}

int sumatorio(int vector[], int dimension){
    int sumatorio=0;
    for (int i=0;i<dimension;i++){
        sumatorio = sumatorio + vector[i];
    }
    return sumatorio;
}

int main() {

    int dimension;
    scanf("%d", &dimension);

    int vector[dimension];
    for (int i=0;i<dimension;i++){
        scanf("%d", &vector[i]);
    }

    int index=0;
    int respuesta = ordenado(vector, dimension, &index);

    if (respuesta==1){
        int suma = sumatorio(vector, dimension);
        printf("SI %d", suma);
    } else{
        printf("NO %d", index);
    }

    return 0;
}
