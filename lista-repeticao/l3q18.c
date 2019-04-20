#include <stdio.h>

int main(){
    double valorIngresso, valorInicial, valorFinal, i, lucro, lucroMax = 0, melhorValor = 0;
    int qtdeIngressos, melhorQtdeIngressos = 0;
    scanf("%lf %lf %lf", &valorIngresso, &valorInicial, &valorFinal);

    if(valorInicial >= valorFinal){
        printf("INTERVALO INVALIDO.");
    }else{
        for(i = valorInicial; i <= valorFinal; i++){
            if(i<valorIngresso){
                qtdeIngressos = 120+(((valorIngresso - i)/0.5)*25);
            }else{
                qtdeIngressos = 120+(((valorIngresso - i)/0.5)*30);
            }
            lucro = i*qtdeIngressos - (200+0.05*qtdeIngressos);
            if(lucroMax < lucro) {
                lucroMax = lucro;
                melhorValor = i;
                melhorQtdeIngressos = qtdeIngressos;
            }
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, qtdeIngressos, lucro);
        }
        printf("Melhor valor final: %.2lf\nLucro: %.2lf\nNumero de ingressos: %d\n", melhorValor, lucroMax, melhorQtdeIngressos);
        
    }
    return 0;
}