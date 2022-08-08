#include <stdio.h>

int main() {

    int dimension;
    scanf("%d", &dimension);
    int array[dimension];

    for (int i=0;i<dimension;i++){
        scanf("%d", &array[i]);
    }

    int contador =0;

    for (int i=0;i<dimension;i++){
        for (int j= i+1;j<dimension;j++){
            if (array[i]==array[j]){
                contador++;
            }
        }
    }

    printf("%d", contador);

    return 0;

}
