#include <stdio.h>

int main(){    
    double massaAviao, aceleracao, tempoDecolagem, velocidadeAtingida, comprimentoPista, trabalho;
    
    scanf("%lf", &massaAviao);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempoDecolagem);
    velocidadeAtingida = aceleracao*tempoDecolagem;
    comprimentoPista = aceleracao*tempoDecolagem*tempoDecolagem/2;
    trabalho = ((massaAviao*1000)*velocidadeAtingida*velocidadeAtingida)/2;

    printf("VELOCIDADE = %.2lf\n", velocidadeAtingida*3.6);
    printf("ESPACO PERCORRIDO = %.2lf\n", comprimentoPista);
    printf("TRABALHO REALIZADO = %.2lf\n", trabalho);


    return 0;
}