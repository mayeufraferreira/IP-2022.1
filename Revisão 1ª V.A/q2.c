#include<stdio.h>

void main() {

    int num1, num2, num3, quadradoSoma, somaQuadrado, diferenca;
    printf("Insira 3 numeros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    quadradoSoma = (num1 + num2 + num3) * (num1 + num2 + num3);
    somaQuadrado = (num1 * num1) + (num2 * num2) + (num3 * num3);
    diferenca = quadradoSoma - somaQuadrado;
    printf("%d\n", diferenca);
}