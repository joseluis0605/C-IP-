#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a<0 || b<0 || c<0){
        printf("ERROR");
    } else{
        int perimetro = a+ b+c;
        if (perimetro==180){
            printf("SI");
        } else{
            printf("NO");
        }
    }




    return 0;
}
