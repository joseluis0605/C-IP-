#include <stdio.h>

void operacion(int n, char desde, char hasta, char aux) {
    if (n == 1) {
        printf("MUEVO EL DISCO %d DESDE %c HASTA %c\n", n, desde,hasta);
    } else {

        operacion((n - 1), desde, aux, hasta);
        printf("MUEVO EL DISCO %d DESDE %c HASTA %c\n", n, desde, hasta);
        operacion((n - 1), aux, hasta, desde);
    }
}

int main() {

    char a = 'A', b = 'B', c = 'C';
    int n;
    scanf("%d", &n);
    operacion(n, a, b, c);
    return 0;
}