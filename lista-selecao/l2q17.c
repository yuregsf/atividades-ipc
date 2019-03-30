#include <stdio.h>

int main(){
    int numero, novoNumero, digito, aux;
    scanf("%d", &numero);
    novoNumero = 0;
    aux = numero;
    if(numero <= 99999){
        while(numero > 0){
            digito = numero%10;
            novoNumero = novoNumero*10 + digito;
            numero /= 10;
        }
        if(novoNumero == aux){
            printf("PALINDROMO\n");
        }else{
            printf("NAO PALINDROMO\n");
        }
    }else{
        printf("NUMERO INVALIDO\n");
    }
    return 0;
}