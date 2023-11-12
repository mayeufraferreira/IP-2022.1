#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //SOMADOR some numeros entre o limite (a,b) a=1, b=10
    int i, soma, contador;
    soma = 0;
    for(i=1; i <=10; i++){
    //   i = 1 2 3 4 5 6 7 8 9 10
    //soma = 1 3 6
        soma = soma + i;
    }
    printf("Soma de 1 a 10: %d\n", soma);

    contador = 0;
    //CONTADOR conte o numero de multiplos de 7 entre (a,b) a=23, b=121
    for(i=23; i <= 121; i++){
        if (i % 7 == 0){
           contador = contador+1;
        }
    }
    printf("Multiplos de 7 entre 23 e 121: %d\n", contador);



    return 0;
}
