#include<stdio.h>

void main() {

    double X, N[100];
    int i;

    scanf("%lf", &X);
    
    for (i=0; i<100; i++) {
        N[i] = X;
        printf("N[%d] = %.4lf\n", i, N[i]);
        X = X/2; 
        N[i+1] = X;  
    }

}