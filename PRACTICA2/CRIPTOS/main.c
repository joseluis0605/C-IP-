#include <stdio.h>

int main() {

    int compra, actual;
    scanf("%d %d", &compra, &actual);

    int balance =  actual - compra;

    if (balance<0){
        balance = compra - actual;
        printf("AHORRA %d", balance);
    } else{
        printf("VENDE %d", balance);
    }



    return 0;
}
