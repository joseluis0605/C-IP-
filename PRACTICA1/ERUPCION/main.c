#include <stdio.h>

int main() {

    int nTerremotos;
    int CO2;
    float suelo;

    scanf("%d", &nTerremotos);
    scanf("%d", &CO2);
    scanf("%f", &suelo);

    if ( (CO2>1500 && suelo>1.2)|| nTerremotos>5 ){
        printf("1");
    } else{
        printf("0");
    }

    return 0;
}
