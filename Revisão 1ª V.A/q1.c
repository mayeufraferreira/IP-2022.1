#include<stdio.h>

void main () {

    float m1, m2, area, potencia;
    printf("Informe as dimensoes do comodo:\n");
    scanf("%f%f", &m1, &m2);
    area = m1*m2;
    potencia = area * 18;
    printf("Area = %.2f metros quadrados\n", area);
    printf("Potencia = %.2f W\n", potencia);
}