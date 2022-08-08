#include <stdio.h>

int main() {

    char letra;
    int pos;
    int letranumerica;
    int limite = 'z';
    scanf("%d",&pos);
    scanf("%c", &letra);


    letranumerica = letra;
    letranumerica = letranumerica + pos;

    if (letranumerica > limite){
        letranumerica = letranumerica-26;
    }

    letra = letranumerica;

    printf("%c", letra);


    return 0;
}
