#include <stdio.h>

int sumaImpares(int array[], int index, int sumatorio){
    if (index<20){
        if (index%2!=0){
            return sumatorio + array[index] + sumaImpares(array, index+1, sumatorio);
        } else{
            sumaImpares(array, index+1, sumatorio);
        }
    } else{
        return sumatorio;
    }
}


int main() {

    int array[20];
    int index=0;
    int sumatorio=0;

    for(int i=0;i<20;i++){
        scanf("%d", &array[i]);
    }

    printf("%d", sumaImpares(array, index, sumatorio));



    return 0;
}
