#include<stdio.h>

void main() {

    int X[10], i;

    for (i=0; i<10; i++) {
        scanf("%d", &X[0]);
        scanf("%d", &X[1]);
        scanf("%d", &X[2]);
        scanf("%d", &X[3]);
        scanf("%d", &X[4]);
        scanf("%d", &X[5]);
        scanf("%d", &X[6]);
        scanf("%d", &X[7]);
        scanf("%d", &X[8]);
        scanf("%d", &X[9]);
        
        for (i = 0; i<10; i++) {
            if (X[i] < 0) {
                X[i] = 1;
            }
            if (X[i] == 0) {
                X[i] = 1;
            }
            printf("X[%d] = %d\n", i, X[i]);
        }
    }
}