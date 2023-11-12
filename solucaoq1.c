#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dim1, dim2, area, potencia;

    printf("Digite a primeira dimensao do comodo:\n");
    scanf("%f", &dim1);
    printf("Digite a segunda dimensao do comodo:\n");
    scanf("%f", &dim2);

    area = dim1*dim2;
    printf("area do comodo: %.2f\n", area);
    potencia = area*18;
    printf("potencia de iluminacao: %.2f W", potencia);

    return 0;
}
