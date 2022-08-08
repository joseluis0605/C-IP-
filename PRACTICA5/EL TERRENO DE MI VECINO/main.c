#include <stdio.h>

int main() {

    int dimension;
    scanf("%d", &dimension);

    int matriz1[dimension][dimension], matriz2[dimension][dimension];

    for (int i=0;i<dimension;i++){
        for (int j=0;j<dimension;j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for (int i=0;i<dimension;i++){
        for (int j=0;j<dimension;j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    int iguales = 1;
    for (int i=0;i<dimension;i++){
        for (int j=0;j<dimension;j++){
            if (matriz1[i][j]!=matriz2[i][j]){
                iguales=0;
            }
        }
    }
    if(iguales){
        printf("IGUALES\n");
    } else{
        printf("DIMISION\n");
    }



    return 0;
}
