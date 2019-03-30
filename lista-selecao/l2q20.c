#include <stdio.h>
#define salarioMinimo 937.00

int main(){
    double rendaBruta, rendaPerCapita;
    int qtdePessoas, tipoEscola, etnia;
    scanf("%lf %d %d %d", &rendaBruta, &qtdePessoas, &tipoEscola, &etnia);    
    rendaPerCapita = rendaBruta/qtdePessoas;

    if(tipoEscola == 2 && rendaPerCapita/salarioMinimo <= 1.5 && etnia != 4){
        printf("ALUNO COTISTA (L2)\n");
    }else if(tipoEscola == 2 && rendaPerCapita/salarioMinimo <= 1.5){
        printf("ALUNO COTISTA (L1)\n");
    }else if(tipoEscola == 2 && etnia != 4){
        printf("ALUNO COTISTA (L4)\n");
    }else if(tipoEscola == 2){
        printf("ALUNO COTISTA (L3)\n");
    }else{
        printf("ALUNO NAO COTISTA\n");
    }

    return 0;
}