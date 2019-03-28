#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);
    segundos += horas * 3600 + minutos * 60;

    printf("O TEMPO EM SEGUNDOS E = %d\n", segundos);
    return 0;
}