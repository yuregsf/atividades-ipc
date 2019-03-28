#include <stdio.h>

int main(){    
    float custoFabrica, percentDistribuidor, percentImposto, precoCarro;
    scanf("%f", &custoFabrica);
    scanf("%f", &percentDistribuidor);
    scanf("%f", &percentImposto);

    precoCarro = custoFabrica+(custoFabrica*percentDistribuidor/100)+(custoFabrica*percentImposto/100);

    printf("O VALOR DO CARRO E = %.2f\n", precoCarro);
    return 0;
}