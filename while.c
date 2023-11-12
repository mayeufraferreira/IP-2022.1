#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;
    int contador = 0;

    printf("Digite sua senha:\n");
    scanf("%d", &senha);

    while(senha != 1234 && contador <2){
     contador++;
     printf("Senha incorreta!\n");
     printf("Tentativa %d esgotada", contador);
     printf("Digite sua senha: \n");

     scanf("%d", &senha);
    }

    if (senha == 1234){
      printf("Usuario logado");
    } else {
      printf("Usuario NAO logado");
    }


    return 0;
}
