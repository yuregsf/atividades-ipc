#include <stdio.h>

int main()
{
    int numero, i;
    double resultado = 0;
    scanf("%d", &numero);

    if (numero > 1)
    {
        for (i = 1; i <= numero; i++)
        {
            resultado += 1.0 / i;
        }
        printf("%lf\n", resultado);
    }
    else
    {
        printf("Numero invalido!\n");
    }
    return 0;
}