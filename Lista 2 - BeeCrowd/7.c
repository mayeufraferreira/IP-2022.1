#include<stdio.h>

void main() {

    float i, j=1, k, S=0;

    for(i=1; i<=39; i = i + 2){
        k = i/j;
        S = S + k;
        j = j*2;
    }
    printf("%.2f\n", S);
}