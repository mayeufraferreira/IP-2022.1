#include<stdio.h>

void main () {

    int peca1, qntd1, peca2, qntd2;
    double valor1, valor2, total;

    scanf("%d%d%lf", &peca1, &qntd1, &valor1);
    scanf("%d%d%lf", &peca2, &qntd2, &valor2);
    
    total = (qntd1*valor1) + (qntd2*valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);


}