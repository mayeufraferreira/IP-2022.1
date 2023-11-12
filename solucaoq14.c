#include <stdio.h>
#include <stdlib.h>



int main()
{

    int vetA[5], vetB[5], vetC[5];
    int valor, i;

    for(i=0; i < 5; i++){
        printf("Digite proximo numero do vetor A:\n");
        scanf("%d", &valor );
        vetA[i] = valor;
    }

    for (i=0; i < 5; i++){
        printf("Digite o proximo numero do vetor B:\n");
        scanf("%d", &valor);
        vetB[i] = valor;
    }

    for(i=0; i < 5; i++){
        vetC[i] = vetA[i] + vetB[i];
        printf("vetC[%d] = %d", i, vetC[i]);
    }


    return 0;
}
