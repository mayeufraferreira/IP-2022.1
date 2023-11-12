#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[20];
    char padrao[] = "UFAPE";
    int i, palavras_iguais;

    printf("Digite uma palavra: \n");
    scanf("%s", &palavra);

    palavras_iguais = 1;
    if (strlen(padrao) == strlen(palavra)){
       for(i=0; i < strlen(padrao); i++){
          if (padrao[i] != palavra[i]){
              palavras_iguais = 0;
          }
       }
    } else {
       palavras_iguais = 0;
    }

    if (palavras_iguais == 1){
       printf("Palavras sao iguais");
    } else {
       printf("Palavras sao diferentes");
    }




    return 0;
}
