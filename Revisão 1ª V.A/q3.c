#include<stdio.h>

int bissexto (int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 4 == 0 && ano % 100 == 0 && ano % 400 ==0)) {
        return 1;
    } else {
        return 0;
    }    
}

void main() {
    int teste, retorno;
    scanf("%d", &teste);
    retorno = bissexto(teste);
    if (retorno == 0) {
        printf("nao bissexto\n");
    } else {
        printf("bissexto\n");
    }
}