#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Problema 1: Receber 10 números do usuário [FOR]
    //Problema 2: Receber números até que 0 seja digitado [WHILE]


    //A partir de uma sequência de números, como identificar o maior/menor deles?
    int i, n, maior;
    for(i=0; i<10; i++){
    // n    =  22 11 23 12 34 32 13 43 8
    //maior =  22 22 23 23 34 34 34 43
        scanf("%d", &n);
        if(i == 0){
            maior = n;
        }
        if(n > maior){
            maior = n;
        }
    }
    printf("maior valor da sequencia: %d\n", maior);

    return 0;
}
