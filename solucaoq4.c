#include <stdio.h>
#include <stdlib.h>



int eh_bissexto(int ano){
    if (( ano%4==0 && ano%100 != 0)  || (ano%4==0 && ano%100==0 && ano%400==0)){
        return 1;
    } else {
        return 0;
    }

}


int main()
{
    int ano_teste, ret, anos_encontrados;

    ano_teste = 2022;
    anos_encontrados = 0;
    while (anos_encontrados < 4){
        ret = eh_bissexto(ano_teste);
        if (ret == 1){
            anos_encontrados++;
            printf("ano bissexto: %d\n", ano_teste);
        }
        ano_teste++;
    }

    return 0;
}
