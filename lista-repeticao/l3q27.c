#include <stdio.h>

int main(){
    int n, i, resposta = 0;
    float x, memoria = 0;
    
    do{
        scanf("%d", &n);
        memoria = 0;
        if(n != 0){
            for(i = 0; i < n; i++){
                scanf("%f", &x);
                if(x >= memoria){
                    memoria = x;
                }else{
                    resposta = 1;
                }
            }
            if(resposta == 0){
                printf("ORDENADA\n");
            }else{
                printf("DESORDENADA\n");
            }
        }else{
            return 0;
        }
        

    }while(1);
}