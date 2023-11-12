#include<stdio.h>

void main() {

    int idade, resto, anos, meses, dias;

    scanf("%d", &idade);

    anos = idade/365;
    resto = idade % 365;

    meses = resto/30;
    resto = resto % 30;

    dias = resto/1;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

}