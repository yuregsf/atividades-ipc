#include <stdio.h>

int main(){
    double salarioMin, limiteIsencao, tv1, tv2, salarioBruto, salarioLiquido, comissao;
    int matricula, tv1Vendido, tv2Vendido;

    scanf("%lf %lf %lf %lf", &salarioMin, &limiteIsencao, &tv1, &tv2);

    do{
        scanf("%d %d %d", &matricula, &tv1Vendido, &tv2Vendido);
        if(matricula != 0){
            if(tv1Vendido >= 10){
                comissao = tv1Vendido*(tv1*0.14);
            }else{
                comissao = tv1Vendido*(tv1*0.13);
            }

            if(tv2Vendido >= 20){
                comissao += tv2Vendido*(tv2*0.13);
            }else{
                comissao += tv2Vendido*(tv2*0.12);
            }

            salarioBruto = salarioMin + comissao;
            salarioLiquido = salarioBruto - salarioBruto*0.08;

            if(salarioLiquido > limiteIsencao){
                salarioLiquido -= (salarioLiquido-limiteIsencao)*0.15;
            }

            printf("MATRICULA = %d, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf\n", matricula, salarioBruto, salarioLiquido);

        }else{
            return 0;
        }
    }while(1);
    return 0;
}