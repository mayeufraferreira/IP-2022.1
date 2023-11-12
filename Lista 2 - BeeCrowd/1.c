#include<stdio.h>

void main() {

    int I=1, J=60;

    for (I=1, J=60; I<20, J>=0; I = I +3, J = J - 5) {
        printf("I=%d J=%d\n", I, J);
    }

}