#include <stdio.h>
#include "string.h"
#include "stdlib.h"

struct regalo{
    char nombre[250];
    int precio;
    int stock;
};
typedef struct regalo regalo;


int main() {

    int numeroRegalos, contadorPrecioAcumulado=0, estudiantes;
    scanf("%d", &numeroRegalos);

    regalo *catalogo;
    catalogo= (regalo*) malloc(sizeof (regalo)*numeroRegalos);


    //introducimos datos
    for (int i=0;i<numeroRegalos;i++){
        scanf("%s", catalogo[i].nombre);
        scanf("%d", &catalogo[i].precio);
        scanf("%d", &catalogo[i].stock);
    }



    //numero Estudiantes
    scanf("%d", &estudiantes);
    int regalosPorAlumno;
    for (int i=0;i<estudiantes;i++){
        scanf("%d", &regalosPorAlumno);
        for (int j=0;j<regalosPorAlumno;j++){
            int regalo;
            scanf("%d", &regalo);
            if (catalogo[regalo].stock>0){
                printf("%s\n", catalogo[regalo].nombre);
                contadorPrecioAcumulado = contadorPrecioAcumulado + catalogo[regalo].precio;
                catalogo[regalo].stock--;
            }
        }
    }
    printf("%d", contadorPrecioAcumulado);

    free(catalogo);

    return 0;
}
