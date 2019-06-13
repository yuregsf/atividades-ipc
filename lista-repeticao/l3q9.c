#include <stdio.h>

int main(){
    unsigned int numero, fatorial;
    int i;
    scanf("%d", &numero);
    fatorial = numero;
    if(numero == 0){
        fatorial = 1;
    }else{
        for(i = 1; i < numero; i++){
            fatorial *= i;
        }
    }
    printf("%d! = %d\n", numero, fatorial);
    return 0;
}