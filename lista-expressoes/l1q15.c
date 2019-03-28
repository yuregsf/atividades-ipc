#include <stdio.h>

int main(){    
    int numero, binario[8];
    scanf("%d", &numero);

    if(numero>=0 && numero<=255){
        int i, k;
        for(i = 7; i>=0; i--){
            binario[i] = numero%2;
            numero = (int)(numero/2);
        }
        for(k = 0; k<8; k++){
            printf("%d", binario[k]);
        }
    }else{
        printf("Numero invalido!");
    }    

    return 0;
}