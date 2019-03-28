#include <stdio.h>

int main()
{
    double temperaturaF, temperaturaC, chuvaInches, chuvaMm;
    scanf("%lf %lf", &temperaturaF, &chuvaInches);
    temperaturaC = (5 * (temperaturaF - 32)) / 9;
    chuvaMm = chuvaInches * 25.4;

    printf("O VALOR EM CELSIUS = %.2lf\n", temperaturaC);
    printf("A QUANTIDADE DE CHUVA E = %.2lf", chuvaMm);
    return 0;
}
