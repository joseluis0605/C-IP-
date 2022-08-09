#include <stdio.h>

int main() {

    int tam, contador = 0, num;
    scanf("%d", &tam);
    int array[tam], index=0;



    do {
        scanf("%d", &num);
        if (num>=0){
            contador++;
            if (index<tam){
                array[index]=num;
                index++;
            }

        }
    } while (num>=0);

    if (contador> tam){
        printf("BUFFER OVERFLOW");
    } else{
        printf("OK");
    }


    return 0;
}
