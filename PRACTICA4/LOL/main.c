#include <stdio.h>

int main() {

    int n;//numero de contrincantes
    int m;//numero de rondas del torneo

    scanf("%d %d", &n,&m);//vale 6 vale 14

    int puntuacionYauo[n];
    for (int i=0;i<n;i++){
        scanf("%d", &puntuacionYauo[i]);
    }


    int contadorVictorias[n];
    for(int i=0;i<n;i++){
        contadorVictorias[i]=0;
    }

    int puntuacionMalos[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d", &puntuacionMalos[i][j]);
        }
    }

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if(puntuacionMalos[i][j] <= puntuacionYauo[j]){
                contadorVictorias[j]++;
            }
        }
    }

    for (int i=0;i<n;i++){
        printf("%d ", contadorVictorias[i]);
    }



    return 0;
}
