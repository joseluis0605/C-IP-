#include <stdio.h>
#include "string.h"

int main() {

    int numeroFrases;
    scanf("%d ", &numeroFrases);

    char frase[250];

    for (int i=0;i<numeroFrases;i++){
        gets(frase);
        //el punto corresponde con el 250
        int encontradoPunto = 0;
        int index = 0;
        while (index< strlen(frase) && !encontradoPunto){
            encontradoPunto = frase[index] == '.';
            if (encontradoPunto==0){
                index++;
            }
        }
        if (encontradoPunto){
            if (frase[index]=='.'&& frase[index+1]>=65 && frase[index+1]<=90){
                printf("Perfecto\n");
            } else {
                frase[index+1] = frase[index+1]- 32;
                printf("ZOQUETE se dice: %s", frase);
            }
        }
        printf("\n");
    }



    return 0;
}
