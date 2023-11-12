#include<stdio.h>

void main() {

    int I=1, J=7;

    for (I=1; I<=9; I = I + 2) {
        for (J=6+I; J>=4+I; J = J - 1) {
            printf("I=%d J=%d\n", I, J); 
        } 
    }
}