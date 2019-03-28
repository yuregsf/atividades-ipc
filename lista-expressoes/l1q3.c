#include <stdio.h>
#define PI 3.14159
    
int main()
{
    double raio, altura, areaCirculo, areaLateral, areaCilindro;
    scanf("%lf", &raio);
    scanf("%lf", &altura);
    areaCirculo = PI*raio*raio;
    areaLateral = 2*PI*raio*altura;
    areaCilindro = 2*areaCirculo+areaLateral;
    
    printf("O VALOR DO CUSTO E = %.2lf\n", areaCilindro*100);
    
    return 0;
}