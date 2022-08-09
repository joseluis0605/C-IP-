#include <stdio.h>
#include <string.h>


struct info{
    char nombre[250];
    int anticuerpos;
};
typedef struct info vacunas;

void operacion(vacunas *vacuna,int maxanticuerpos,int nvacunas);
int main(){
    int nvacunas,npacientes;
    scanf("%d",&nvacunas);
    vacunas vacuna[nvacunas];
    for (int i = 0; i < nvacunas; ++i) {
        scanf("%s",vacuna[i].nombre);
        scanf("%d",&vacuna[i].anticuerpos);
    }
    scanf("%d",&npacientes);

    int maxanticuerpos;
    for (int i = 0; i < npacientes; ++i) {
        scanf("%d",&maxanticuerpos);
        operacion(vacuna,maxanticuerpos,nvacunas);
        printf("\n");
    }


    return 0;
}

void operacion(vacunas *vacuna,int maxanticuerpos,int nvacunas){
    char inyectada[250];
    int acuAnticuerpos=0,array[nvacunas],noSupera=0;
    for (int i = 0; i < 3; ++i) {
        scanf("%s",inyectada);
        for (int j = 0; j < nvacunas; ++j) {
            if(strcmp(inyectada,vacuna[j].nombre)==0){
                if(acuAnticuerpos+vacuna[j].anticuerpos<=maxanticuerpos){
                    acuAnticuerpos= acuAnticuerpos + vacuna[j].anticuerpos;
                    array[i]=j;
                }else{
                    printf("REACCION %s",vacuna[j].nombre);
                    i=3;
                    j=nvacunas;
                    noSupera=1;
                }
            }
        }
    }
    if(noSupera==0){
        printf("SOBREVIVIO A");
        for (int i = 0; i < nvacunas; ++i) {
            printf(" %s",vacuna[array[i]].nombre);
        }
    }
}
