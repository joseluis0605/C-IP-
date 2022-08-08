#include <stdio.h>

int main() {

    int x,y;
    scanf("%d %d", &x, &y);

    if (x>0 && y>0){
        printf("MARTE");
    } else if (x<0 && y>0){
        printf("VENUS");
    } else if (x<0 && y<0){
        printf("URANO");
    } else if (x>0 && y<0){
        printf("SATURNO");
    }


    return 0;
}
