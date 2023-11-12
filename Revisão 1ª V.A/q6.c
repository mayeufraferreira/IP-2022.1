#include<stdio.h>

void main() {
    int i, n;
    float soma;
    scanf("%d", &n);

    soma = 0;
    for (i=1; i<=n; i++) {
        soma = soma + 1.0/i;
    }

    printf("Soma: %f", soma);
   
}