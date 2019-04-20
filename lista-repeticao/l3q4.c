#include <stdio.h>

int main()
{
    int x, y, i;
    scanf("%d %d", &x, &y);

    if (x % 2 == 0)
    {
        for (i = 0; i < y * 2; i += 2)
        {
            printf("%d ", x + i);
        }
    }
    else
    {
        printf("O PRIMEIRO NUMERO NAO E PAR");
    }
    printf("\n");
    return 0;
}