#include<stdio.h>

int bissexto (int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 4 == 0 && ano % 100 == 0 && ano % 400 ==0)) {
        return 1;
    } else {
        return 0;
    }    
}

void main() {
    int teste = 2022, retorno, listaBissexto = 0;
    while (listaBissexto < 4) {
        retorno = bissexto(teste);
        if (retorno == 1) {
            listaBissexto++;
            printf("Bissexto: %d\n", teste);
        } 

        teste++;
    }       
}