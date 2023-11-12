#include <stdio.h>
#include <stdlib.h>






int main()
{

    int horas, minutos;

    printf("Digite quantidade de horas:\n");
    scanf("%d", &horas);
    printf("Digite quantidade de minutos\n");
    scanf("%d", &minutos);

    printf("Hora em minutos: %d\n", horas*60);
    printf("Total em minutos: %d\n", horas*60+minutos);
    printf("Minutos em segundos %d", (horas*60+minutos)*60);

    return 0;
}
