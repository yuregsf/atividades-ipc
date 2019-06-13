#include <stdio.h>

void separaNotas(int reais, int *nota100, int *nota50, int *nota10, int *nota1);

int main(){
    int reais, nota100, nota50, nota10, nota1;
    scanf("%d", &reais);
    separaNotas(reais, &nota100, &nota50, &nota10, &nota1);
    printf("NOTAS DE 100 = %d\n", nota100);
    printf("NOTAS DE 50 = %d\n", nota50);
    printf("NOTAS DE 10 = %d\n", nota10);
    printf("MOEDAS DE 1 = %d\n", nota1);
    return 0;
}

void separaNotas(int reais, int *nota100, int *nota50, int *nota10, int *nota1){
    *nota100 = reais/100;
    reais %= 100;
    *nota50 = reais/50;
    reais %= 50;
    *nota10 = reais/10;
    reais %= 10;
    *nota1 = reais/1;
    reais %= 1;
}