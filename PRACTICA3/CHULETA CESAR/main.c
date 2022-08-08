#include <stdio.h>

int main() {

    int nposiciones, longitud;
    char caracter;

    scanf("%d %d", &nposiciones,&longitud);

    for (int i=0;i<longitud;i++){
        scanf(" %c", &caracter);
        for (int j=0;j<nposiciones;j++){
            caracter = caracter + 1;
            if (caracter == '{'){
                caracter = 'a';
            }
        }
        printf("%c", caracter);
    }
    return 0;
}
