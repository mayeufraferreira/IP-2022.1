#include <stdio.h>
#include <stdlib.h>



int main()
{

    int vet[8], pos[8], neg[8];
    int i, valor, proxPos, proxNeg;

    for(i=0; i < 8; i++){
        printf("Digite proximo numero do vetor:\n");
        scanf("%d", &valor );
        vet[i] = valor;
    }

    proxNeg = 0;
    proxPos = 0;

    for(i=0; i<8; i++){

        if (vet[i] > 0 ){
            pos[proxPos] = vet[i];
            proxPos++;
        } else {
            neg[proxNeg] = vet[i];
            proxNeg++;
        }

    }

    printf("Vetor de positivos:\n");
    for(i = 0; i < proxPos; i++){
        printf(" %d ", pos[i]);
    }

    printf("\nVetor de negativos:\n");
    for(i = 0;i  < proxNeg; i++){
        printf(" %d ", neg[i]);
    }

    return 0;
}
