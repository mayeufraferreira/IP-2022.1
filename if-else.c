#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, limitePeso;
    int idade;
    char sexo;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite seu peso:\n");
    scanf("%f", &peso);
    printf("Digite seu sexo (m/f):\n");
    scanf(" %c", &sexo);

    if (sexo == 'm' || sexo == 'M'){
        limitePeso = 60;
    } else if (sexo == 'f' || sexo == 'F'){
        limitePeso = 50;
    } else {
       printf("Error valor invalido");
    }

    if (idade >= 18 && idade <= 55 ){
        if (peso > limitePeso){
           printf("Doacao autorizada");
        } else {
           printf("Peso nao adequado");
        }
    } else {
        printf("Idade nao adequada");
    }


    return 0;
}
