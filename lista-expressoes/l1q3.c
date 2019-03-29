#include <stdio.h>
#define custoAluminioM2 100.00
#define PI 3.14159

int main()
{
    float raio, altura, areaCilindro, custoTotal;
    scanf("%f %f", &raio, &altura);
    areaCilindro = 2 * (PI * raio * raio) + (2 * PI * raio * altura);
    custoTotal = areaCilindro * custoAluminioM2;

    printf("O VALOR DO CUSTO E = %.2f\n", custoTotal);

    return 0;
}