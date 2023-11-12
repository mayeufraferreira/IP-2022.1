#include<stdio.h>

void main() {

    int X, i;

    scanf("%d", &X);

    for (i=1; i<=X; i = i + 2){
        printf("%d\n", i);
    }
}