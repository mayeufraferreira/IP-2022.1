#include <stdio.h>
#include <stdlib.h>

int eh_primo(int numero){
    int ret, i;
    ret = 1;
    for(i=2; i < numero; i++){
        if (numero%i == 0){
             ret = 0;
        }
    }
    return ret;

}

int main()
{



    return 0;
}
