#include <stdio.h>

int main() {

    int n=10;
    int array[n];
    int index;

    for (int i = 0; i < n; i++) {
        array[i]=0;
    }


    do {
        scanf("%d", &index);
        if (index!=-1){
            array[index]++;
        }
    } while (index!=-1);

    for(int i=0;i<n;i++){
        if (array[i]>= 3){
            printf("%d ", i);
        }
    }


    return 0;
}
