#include<stdio.h>

void main () {

    int tempo, hora, minuto, segundo, resto;

    scanf("%d", &tempo);

    hora = tempo/3600;
    resto = tempo % 3600;
    minuto = resto/60;
    resto = tempo % 60;
    segundo = resto/1;
    
    printf("%d:%d:%d\n", hora, minuto, segundo);
    
}