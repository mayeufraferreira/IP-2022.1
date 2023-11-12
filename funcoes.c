#include<stdio.h>
#include<math.h>

//definicao de uma nova funcao
void calc_imc(float p, float a){
    float imc;
    imc = p/(pow(a,2));
    
    printf("IMC calculado: %.2f para altura %.2f e peso %.2f",imc,a,p);

}

void main(){
    float peso, altura; //alocacao de memoria

    printf("Digite seu peso: ");
    scanf("%f",&peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    calc_imc(peso, altura);

}

