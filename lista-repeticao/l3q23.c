#include <stdio.h>
#include <string.h>

int main(){
	unsigned long int codMercadoria, mercadoriaMaiorLucro, mercadoriaMaiorVenda;
	float precoCompra, precoVenda, lucro, maiorLucro = 0, totalCompras = 0, totalVendas = 0, lucroTotal = 0;
	int vendas, maiorVenda = 0, contMenor=0, contMeio=0, contMaior=0, parada;
	char inputStr[1024];

	do{
		if (fgets (inputStr, sizeof (inputStr), stdin) == NULL)
            break;

        if (strcmp (inputStr, "\n") == 0)
            break;
		
		if(sscanf(inputStr, "%u %f %f %d", &codMercadoria, &precoCompra, &precoVenda, &vendas) != 1){
			lucro = (((precoVenda)/precoCompra)-1)*100;
			if(maiorLucro < lucro){
				maiorLucro = lucro;
				mercadoriaMaiorLucro = codMercadoria;
			}
			if(maiorVenda < vendas){
				maiorVenda = vendas;
				mercadoriaMaiorVenda = codMercadoria;
			}
			if(lucro < 10){
				contMenor++;
			}else if(lucro >= 10 && lucro < 20){
				contMeio++;
			}else{
				contMaior++;
			}
			totalCompras += precoCompra*vendas;
			totalVendas += precoVenda*vendas;
			lucroTotal = ((totalVendas/totalCompras)-1)*100;
		}else{
			break;
		}
	}
	while(1);
	printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", contMenor);
	printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", contMeio);
	printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", contMaior);
	printf("Codigo da mercadoria que gerou maior lucro: %u\n", mercadoriaMaiorLucro);
	printf("Codigo da mercadoria mais vendida: %u\n", mercadoriaMaiorVenda);
	printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", totalCompras, totalVendas, lucroTotal);
	return 0;
}
