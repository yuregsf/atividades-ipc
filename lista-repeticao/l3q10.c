#include <stdio.h>

int main(){
    float numero, inicio, vezes, somador, atual;
    int i;
    scanf("%f", &numero);
    scanf("%f", &inicio);
    scanf("%f", &vezes);
    scanf("%f", &somador);

    //Soma
    printf("Tabuada de soma:\n");
    for(i = 0; i<vezes; i++){
        atual = inicio+somador*i;
        printf("%.2f + %.2f = %.2f\n", numero, atual, numero+atual);
    }
    //Subtração
    printf("Tabuada de subtracao:\n");
    for(i = 0; i<vezes; i++){
        atual = inicio+somador*i;
        printf("%.2f - %.2f = %.2f\n", numero, atual, numero-atual);
    }
    //Multiplicação
    printf("Tabuada de multiplicacao:\n");
    for(i = 0; i<vezes; i++){
        atual = inicio+somador*i;
        printf("%.2f x %.2f = %.2f\n", numero, atual, numero*atual);
    }
    //Divisão
    printf("Tabuada de divisao:\n");
    for(i = 0; i<vezes; i++){
        atual = inicio+somador*i;
        printf("%.2f / %.2f = %.2f\n", numero, atual, numero/atual);
    }
    return 0;
}