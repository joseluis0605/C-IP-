#include <stdio.h>
#include "string.h"

void introducirProhibido (int numeroPalabrasProhibidas,char palabrasProhibidas[numeroPalabrasProhibidas][250] ){

    for (int i=0;i<numeroPalabrasProhibidas;i++){
        scanf("%s", palabrasProhibidas[i]);
    }
}
void introducirEmail( int palabrasEmail,char palabras[palabrasEmail][250]){

    for (int i=0;i<palabrasEmail;i++){
        scanf("%s", palabras[i]);
    }
}

void phising (int palabrasEmail,int numeroPalabrasProhibidas,char palabras[palabrasEmail][250],char palabrasProhibidas[numeroPalabrasProhibidas][250] ){
    int sumatorioPalabras=0;
    for (int i=0;i<palabrasEmail;i++){
        for (int j=0;j<numeroPalabrasProhibidas;j++){
            if (strcmp(palabras[i], palabrasProhibidas[j])==0){
                sumatorioPalabras++;
            }
        }
    }
    if (sumatorioPalabras>= (palabrasEmail/2)){
        printf("PHISHING DETECTADO");
    } else{
        printf("CORREO LEGITIMO");
    }
}

int main() {

    //introducimos catalogo de palabras prohibidas
    int numeroPalabrasProhibidas;
    scanf("%d ", &numeroPalabrasProhibidas);
    char palabrasProhibidas[numeroPalabrasProhibidas][250];
    introducirProhibido(numeroPalabrasProhibidas, palabrasProhibidas);

    //introducimos palabras email
    int palabrasEmail;
    scanf("%d ", &palabrasEmail);
    char palabras[palabrasEmail][250];
    introducirEmail(palabrasEmail, palabras);

    phising(palabrasEmail, numeroPalabrasProhibidas, palabras, palabrasProhibidas);

    return 0;
}
/*

        int encontrada=0;
        int   index=0;
        while (index<palabrasEmail && !encontrada){
            if (strcmp(palabrasProhibidas[i], palabras[index])==0){
                encontrada=1;
                sumatorioPalabras++;
            } else{
                index++;
            }
        }
 */