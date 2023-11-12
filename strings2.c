#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[20];
    char nova_palavra[20];
    int i, new_i;

    printf("Digite uma palavra: \n");
    scanf("%s", &palavra);
    new_i = 0;
    for(i = 0; i < strlen(palavra); i++){

       if(palavra[i] != 'a' && palavra[i] != 'A'){
           nova_palavra[new_i] = palavra[i];
           new_i++;
       }
    }
    nova_palavra[new_i] = '\0';
    printf("Resultado: %s", nova_palavra);

    return 0;
}
