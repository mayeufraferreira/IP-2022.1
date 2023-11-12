#include<stdio.h>

void main() {

    float i, j, S=0;

    for(i = 1; i<=100; i++) {
        j = 1/i;
        S = S + j;
    }
    printf("%.2f\n", S);
}