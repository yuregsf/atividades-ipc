#include <stdio.h>

int main(){
    int numero, memoria, nota100, nota50, nota10, moeda1;

    scanf("%d", &numero);
    nota100 = (int)(numero/100);
    numero = numero-nota100*100;
    nota50 = (int)(numero/50);
    numero = numero-nota50*50;
    nota10 = (int)(numero/10);
    numero = numero-nota10*10;
    moeda1 = (numero);

    printf("NOTAS DE 100 = %d\n", nota100);
    printf("NOTAS DE 50 = %d\n", nota50);
    printf("NOTAS DE 10 = %d\n", nota10);
    printf("MOEDAS DE 1 = %d\n", moeda1);

    return 0;
}