#include<stdio.h>

void main() {

    int inicio, fim, horas;

    scanf("%d%d", &inicio, &fim);

    if (inicio > fim) {
        horas = (fim - inicio) + 24;
    } else if(inicio < fim) {
        horas = fim - inicio;
    } else if (inicio == fim) {
        horas = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", horas);


}