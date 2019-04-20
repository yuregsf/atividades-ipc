#include <stdio.h>

int main()
{
    int valorInicial, razao, n, i, resultado = 0;
    scanf("%d %d %d", &valorInicial, &razao, &n);
    for (i = 0; i < n; i++)
    {
        resultado += valorInicial + razao * i;
    }

    printf("%d\n", resultado);
    return 0;
}