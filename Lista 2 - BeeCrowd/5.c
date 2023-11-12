#include<stdio.h>

void main() {

    int N, i, j, X, Y, soma;

    scanf("%d", &N);

    for (i = 0; i<N; i++) {
        scanf("%d%d", &X, &Y);
        if (X>Y) {
            for(j=Y+1, soma=0; j<X; j++) {
                if (j%2 != 0) {
                    soma = soma + j;
                }
            }
        } else if (X<=Y) {
            for(j=X+1, soma=0; j<Y; j++) {
                if (j%2 != 0) {
                    soma = soma + j;
                }
            }
        }

        printf("%d\n", soma);

    }

}