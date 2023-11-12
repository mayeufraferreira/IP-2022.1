#include<stdio.h>
#include<math.h>

void main() {

    double raio, area;
    scanf("%lf", &raio);
    area = pow(raio, 2) * 3.14159;
    printf("A=%.4lf\n", area);

}