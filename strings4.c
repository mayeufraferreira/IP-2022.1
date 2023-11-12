#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[20];
    char padrao[] = "UFAPE";
    int ret, palavras_iguais;

    printf("Digite uma palavra: \n");
    scanf("%s", &palavra);


    ret = strcmp(padrao, palavra);
    if (ret == 0){
       printf("Palavras iguais");
    } else {
       printf("Palavras diferentes");
    }


    return 0;
}
