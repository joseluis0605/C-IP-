#include <stdio.h>

int main() {

    int array[7];
    for (int i = 1; i < 7; i++) {
        scanf("%d", &array[i]);
    }
    for (int i=1;i<7;i++){
        int index = i;
        printf("%d ", index);
        for (int j=0;j<array[i];j++){
            printf("=");
        }
        printf("\n");
    }

    //buscamos el mayor
    int max = array[1];
    int indexMayor= 1;
    for (int i=1;i<7;i++){
        if (max < array[i]){
            max = array[i];
            indexMayor = i;
        }
    }

    printf("El mas usado es el cupon %d con %d usos", indexMayor, array[indexMayor]);



    return 0;
}
