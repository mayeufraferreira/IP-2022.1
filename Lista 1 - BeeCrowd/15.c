#include<stdio.h>

void main() {

    int X, Y, i;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X < Y) {
        for (i=X+1; i<Y; i++) {
            if (i % 5 == 2 || i % 5 == 3) {
                printf("%d\n", i);
            }
        }
    
    } else if (X > Y) {
        for (i=Y+1; i<X; i++) {
            if (i % 5 == 2 || i % 5 == 3) {
                printf("%d\n", i);
            }
        }
    }
}