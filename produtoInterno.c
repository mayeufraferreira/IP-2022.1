#include <stdio.h>
#include <stdlib.h>



int main()
{

    int vetA[3], vetB[3];
    int valor, i, somador;

    for(i=0; i < 3; i++){
        printf("Digite proximo numero do vetor A:\n");
        scanf("%d", &valor );
        vetA[i] = valor;
    }

    for (i=0; i < 3; i++){
        printf("Digite o proximo numero do vetor B:\n");
        scanf("%d", &valor);
        vetB[i] = valor;
    }

    somador = 0;
    for(i=0; i < 3; i++){
       somador  = somador + (vetA[i] * vetB[i]);

    }

    printf("produto interno: %d", somador);


    return 0;
}
