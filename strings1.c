#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char univ[10];
    int i, contador;

    printf("Digite sua universidade: \n");
    scanf("%s", &univ);

    contador = 0;
    for(i=0; i < strlen(univ); i++){
         if (univ[i] == "E"){
             contador++;
         }
    }

    printf("numero de ocorrencias: %d\n", contador);

    return 0;
}
