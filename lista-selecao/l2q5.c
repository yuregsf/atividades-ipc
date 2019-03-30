#include <stdio.h>

int main(){
    int horas;
    float valorTotal;
    scanf("%d", &horas);
    
    if(horas%3 == 0){
        valorTotal = horas/3*10;
    }else{
        valorTotal = (horas%3)*5 + ((horas - horas%3)/3)*10;
    }

    printf("O VALOR A PAGAR E = %.2f\n", valorTotal);
    return 0;
}