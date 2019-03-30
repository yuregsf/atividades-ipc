#include <stdio.h>

int main(){
    int matricula, dependentes;
    float salarioMin, salarioFunc, taxaPaga, impostoBruto, impostoLiquido, resultado;
    scanf("%d %f %d %f %f", &matricula, &salarioMin, &dependentes, &salarioFunc, &taxaPaga);

    if(salarioFunc/salarioMin <= 5){
        impostoBruto = 0;
    }else if(salarioFunc/salarioMin > 5 && salarioFunc/salarioMin <= 12){
        impostoBruto = salarioFunc*0.08;
    }else{
        impostoBruto = salarioFunc*0.2;
    }
    impostoLiquido = impostoBruto - 300*dependentes;
    resultado = impostoLiquido - salarioFunc*(taxaPaga/100);
    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2f\n", impostoBruto);
    printf("IMPOSTO LIQUIDO = %.2f\n", impostoLiquido);
    printf("RESULTADO = %.2f\n", resultado);

    if(resultado < 0){
        printf("IMPOSTO A RECEBER\n");
    }else if(resultado == 0){
        printf("IMPOSTO QUITADO\n");
    }else{
        printf("IMPOSTO A PAGAR\n");
    }
    return 0;
}