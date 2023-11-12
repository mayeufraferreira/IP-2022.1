#include<stdio.h>

void main() {

    int valor, i, maior = 0, posicao = 1;

    for (i=1; i<=100; i++) {
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

}