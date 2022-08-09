#include <stdio.h>
#include "string.h"
int main() {

    int numeroFrase;
    scanf("%d ", &numeroFrase);

    for (int i=0;i<numeroFrase;i++){
        char frase[250];
        gets(frase);
        int aceptador=0;

        if (strlen(frase)<=90){
            aceptador++;
        }

        int contadorPalabras=0;
        for (int j=0;j< strlen(frase);j++){
            if (frase[j]==' ' && frase[j+1]!=' '){
                contadorPalabras++;
            }
        }
        if (contadorPalabras<15){
            aceptador++;
        }

        int tieneSignoInterrogacion = 0;

        for (int j=0;j< strlen(frase);j++){
            if (frase[j]=='?'){
                tieneSignoInterrogacion=1;
            }
        }
        if (!tieneSignoInterrogacion){
            aceptador++;
        }

        int punto = 0;
        for(int j=0;j< strlen(frase);j++){
            if ((frase[j]=='.' || frase[j]==',') && (j!=0 || j!= strlen(frase)-1)){
                punto=1;
            }
        }

        if (punto==0){
            aceptador++;
        }


        if (aceptador==4){
            printf("ACCEPTED\n");
        } else{
            printf("REJECTED\n");
        }
    }


    return 0;
}
