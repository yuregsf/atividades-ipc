#include <stdio.h>

int main(){
    int n, i, j, k, somador=0, digito1, digito2;
    int cpf[11];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        somador = 0;
        for(j = 0; j<11; j++){
            scanf("%d", &cpf[j]);
        }
        for(j = 0; j<9; j++){
            somador += cpf[j]*(j+1);
        }
        digito1 = somador%11 != 10 ? somador%11 : 0;
        somador = 0;
        for(j = 0, k=9; j<9; j++, k--){
            somador += cpf[j]*k;
        }
        digito2 = somador%11 != 10 ? somador%11 : 0;

        if(cpf[9] == digito1 && cpf[10] == digito2){
            printf("CPF valido\n");
        }else{
            printf("CPF invalido\n");
        }
    }

    return 0;
}