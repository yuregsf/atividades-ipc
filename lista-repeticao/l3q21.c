#include <stdio.h>
#include <math.h>

int main(){
    int i, testes, numero1, numero2, inversoNumero1, inversoNumero2;

    scanf("%d", &testes);
    for(i = 0; i < testes; i++){
        scanf("%d %d", &numero1, &numero2);
        inversoNumero1 = inversoNumero2 = 0;
        while(numero1 != 0){
            inversoNumero1 = inversoNumero1*10+numero1%10;
            numero1 /= 10;
        }
        while(numero2 != 0){
            inversoNumero2 = inversoNumero2*10+numero2%10;
            numero2 /= 10;
        }
        inversoNumero1 > inversoNumero2 ? printf("%d\n", inversoNumero1) : printf("%d\n", inversoNumero2);
    }
    return 0;
}