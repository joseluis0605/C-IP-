#include <stdio.h>

int obtenerBinario (int numero){
    int binario = 0;
    int resto=0;
    int multiplicador=1;

    while (numero!=0){
        resto=numero%2;
        numero=numero/2;
        binario = binario + resto*multiplicador;
        multiplicador=multiplicador*10;
    }
    return binario;
}

int main() {
    int numero;
    scanf("%d",&numero);

    for (int i=0;i<numero;i++){
        int n;
        scanf("%d", &n);
        printf("%d\n", obtenerBinario(n));
    }



    return 0;
}
