#include <stdio.h>
#define K 0.7
     
int main(){
	float salarioMinimo, kwResidencia, valorKw;
	scanf("%f %f", &salarioMinimo, &kwResidencia);
	valorKw = (salarioMinimo*K)/100;
	printf("Custo por kW: R$ %.2f\n", valorKw);
	printf("Custo do consumo: R$ %.2f\n", valorKw*kwResidencia);
	printf("Custo com desconto: R$ %.2f\n", (valorKw*kwResidencia)*0.9);
	return 0;
}
