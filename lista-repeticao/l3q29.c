#include <stdio.h>
#include <math.h>

int main(){
    double numero;
    int cont = 0, denominador, numerador;

    scanf("%lf", &numero);
    while(1){
        numero *= 10;
        cont++;
        numerador = numero;
        if(numerador/pow(10,cont) == numero/pow(10,cont)){
            break;
        }
        else{
            continue;
        }
         
    }
    denominador = pow(10,cont);
    cont = 2;
    while(cont <= denominador && cont <= numerador){
        while(numerador%cont == 0 && denominador%cont == 0){
            numerador /= cont;
            denominador /= cont;
        }
        cont++;
    }

    printf("%d/%d\n", numerador, denominador);
    return 0;
}