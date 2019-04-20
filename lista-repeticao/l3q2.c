#include <stdio.h>

int main()
{
    int conversoes, i;
    double celsius, fahrenheit;

    scanf("%d", &conversoes);

    for (i = 0; i < conversoes; i++)
    {
        scanf("%lf", &fahrenheit);
        celsius = (5 * (fahrenheit - 32)) / 9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahrenheit, celsius);
    }

    return 0;
}