#include <stdio.h>
#define COMERCIAL 'C'
#define INDUSTRIAL 'I'
#define RESIDENCIAL 'R'

int main(){
    int conta;
    float consumo, excedente, valorTotal;
    char tipoConsumidor;

    scanf("%d %f %c", &conta, &consumo, &tipoConsumidor);

    if (tipoConsumidor == RESIDENCIAL){
        valorTotal = 5 + 0.05 * consumo;
    }
    else if (tipoConsumidor == COMERCIAL){
        if (consumo <= 80){
            valorTotal = 500;
        }else{
            excedente = consumo - 80;
            valorTotal = 500 + 0.25 * excedente;
        }
    }else if (tipoConsumidor == INDUSTRIAL){
        if (consumo <= 100){
            valorTotal = 800;
        }else{
            excedente = consumo - 100;
            valorTotal = 800 + 0.04 * excedente;
        }
    }
    else{
        printf("VALOR INVALIDO\n");
        return 0;
    }

    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", valorTotal);

    return 0;
}