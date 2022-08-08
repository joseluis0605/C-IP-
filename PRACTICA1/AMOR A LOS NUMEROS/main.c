#include <stdio.h>

int main() {

    float estatura;
    int peso;
    scanf("%f", &estatura);
    scanf("%d", &peso);

    if (estatura>1.69 && estatura<1.84 && peso<90){
        printf("1");
    }else{
        printf("0");
    }

    return 0;
}
