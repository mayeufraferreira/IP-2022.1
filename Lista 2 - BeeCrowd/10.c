#include<stdio.h>

void main() {

    int N[1000], i, T;

    scanf("%d", &T);

    for (i=0; i<1000; i++) {
        N[i] = i % T;
        printf("N[%d] = %d\n", i, N[i]);
    }
}