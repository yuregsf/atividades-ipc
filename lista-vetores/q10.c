#include <stdio.h>

int main(){
    int numero, binario[32], j, aux;
    while(scanf("%d", &numero) != EOF){
        j = -1;
        if(numero == 0){
            printf("0\n");
            continue;
        }
        while(numero != 0){
            j++;  
            binario[j] = numero%2; 
            numero /= 2;
        }
        while(j >= 0 ){
            printf("%d", binario[j]);
            j--;
        }
        printf("\n");
    }
    return 0;
}