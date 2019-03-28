#include <stdio.h>
#include <math.h>

int main()
{
    float altura, aresta, volume, areaHexagono;
    scanf("%f %f", &altura, &aresta);

    areaHexagono = (3 * aresta * aresta * sqrt(3)) / 2;
    volume = (areaHexagono * altura) / 3;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume);
    return 0;
}