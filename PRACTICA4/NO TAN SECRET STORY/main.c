#include <stdio.h>

int main() {

    int nConcursantes;
    scanf("%d", &nConcursantes);

    int concursantes[nConcursantes];

    for (int i=0;i<nConcursantes;i++){
        scanf("%d ", &concursantes[i]);
    }



    int participante1, participante2;

    do {
        scanf("%d", &participante1);
        scanf("%d", &participante2);
        if(participante1 >= 0 && participante2 >= 0){
            int aux = concursantes[participante1];
            concursantes[participante1] = concursantes[participante2];
            concursantes[participante2] = aux;
        }
    } while (participante1 >= 0 && participante2 >= 0);


    int premiados;
    scanf("%d", &premiados);
    int esfera;

    for (int i=0;i<premiados;i++){
        int esfera;
        scanf("%d", &esfera);

        //buscamos
        int encontrado = 0;
        int index=0;
        while (!encontrado && index<nConcursantes){
            if (esfera==concursantes[index]){
                encontrado = 1;
                printf("%d ", index);
            } else{
                index++;
            }
        }
    }


    return 0;
}
