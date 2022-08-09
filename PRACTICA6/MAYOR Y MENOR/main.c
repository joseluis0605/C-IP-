#include <stdio.h>

int main() {

    int numeroAspirantes;
    scanf("%d", &numeroAspirantes);

    int altura;
    scanf("%d", &altura);

    int arrayAlturas[numeroAspirantes];

    for (int i = 0; i < numeroAspirantes; i++) {
        scanf("%d", &arrayAlturas[i]);
    }

    int index =0;
    int menor=arrayAlturas[0];
    for (int i=0;i<numeroAspirantes;i++){
        if (arrayAlturas[i]<menor){
            menor = arrayAlturas[i];
            index=i;
        }
    }
    printf("%d ", index);

    int mayor = arrayAlturas[0];
    index=0;
    for (int i=0;i<numeroAspirantes;i++){
        if (arrayAlturas[i]>mayor){
            mayor = arrayAlturas[i];
            index=i;
        }
    }
    printf("%d ", index);


    int numeroSuperan=0;

    for (int i=0;i<numeroAspirantes;i++){
        if (arrayAlturas[i]>=altura){
            numeroSuperan++;
        }
    }
    printf("%d", numeroSuperan);

    return 0;
}
