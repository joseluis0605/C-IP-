#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    //buscamos el menor
    int menor = array[0];
    for (int i=0;i<n;i++){
        if(menor>array[i]){
            menor = array[i];
        }
    }
    for (int i=0;i<n;i++){
        array[i]=array[i]-menor;
        if (array[i]>0){
            printf("%d ", array[i]);
        }
    }

    return 0;
}
