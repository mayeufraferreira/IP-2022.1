#include<stdio.h>

void main() {

    int N, i, j, k, impar[5], par[5], contagemPar = 0, contagemImpar = 0;

    for (i=0; i<15; i++) {
        scanf("%d", &N);

        if (N%2 == 0) {
            par[contagemPar] = N;
            contagemPar++;
        } else {
            impar[contagemImpar] = N;
            contagemImpar++;
        }

        if (contagemPar == 5) {
            for (j=0; j<5; j++) {
                contagemPar = 0;
                printf("par[%d] = %d\n", j, par[j]);
            }
        }

        if (contagemImpar == 5) {
            for(k=0; k<5; k++) {
                contagemImpar = 0;
                printf("impar[%d] = %d\n", k, impar[k]);
            } 
        }
    }

    for(k=0; k<contagemImpar; k++) {
        printf("impar[%d] = %d\n", k, impar[k]);
    } 

    for(j=0; j<contagemPar; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    } 

}
