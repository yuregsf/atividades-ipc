#include <stdio.h>

int main(){
    int numero, milhar,centena,dezena,unidade;
    scanf("%d", &numero);

    if(numero > 0 && numero <= 9999){
        unidade = numero%10;
        dezena = (numero%100 - unidade);
        centena = (numero%1000 - dezena - unidade);
        milhar = (numero - centena - dezena - unidade);
        
        //CONDIÇÃO DA ORDEM
        if (numero < 10){            
            printf("(primeira ordem) %d = ", numero);
        }else if (numero < 100){
            printf("(segunda ordem) %d = ", numero);
        }else if (numero < 1000){
            printf("(terceira ordem) %d = ", numero);
        }else{
            printf("(quarta ordem) %d = ", numero);
        }

        //CONDIÇÃO DO PLURAL
        if(milhar/1000 > 0 ){
            if(milhar/1000 > 1){
                printf("%d unidades de milhar + ", milhar/1000);
            }else{
                printf("%d unidade de milhar + ", milhar/1000);
            }
        }if(centena/100 > 0 ){
            if(centena/100 > 1){
                printf("%d centenas + ", centena/100);
            }else{
                printf("%d centena + ", centena/100);
            }
        } if(dezena/10 > 0 ){
            if(dezena/10 > 1){
                printf("%d dezenas + ", dezena/10);
            }else{
                printf("%d dezena + ", dezena/10);
            }
        }if(unidade > 0 ){
            if(unidade > 1){
                printf("%d unidades = ", unidade);
            }else{
                printf("%d unidade = ", unidade);
            }
        }

        //CONDIÇÃO DA FATORAÇÃO
        if(milhar != 0 ){
                printf("%d + ", milhar);
        }if(centena != 0 ){
            printf("%d + ", centena);
        }if(dezena != 0 ){
            printf("%d + ", dezena);
        }if(unidade != 0 ){
            printf("%d\n", unidade);
        }
    }else{
        printf("Numero invalido!\n");
    }
    return 0;
}