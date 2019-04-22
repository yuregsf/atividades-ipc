#include <stdio.h>

int main(){
    int n, i, j, menorAmigo = 1, maiorAmigo = 1, somador1=0, somador2=0;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        while(1){
            while(somador1 <= menorAmigo){
                somador1++;
            }
            maiorAmigo = somador1;
            for(j = 0; j < maiorAmigo; j++){
                if(maiorAmigo%j){
                    somador2++;
                }
            }
            if(somador2 == menorAmigo && menorAmigo < maiorAmigo){
                printf("(%d,%d)", menorAmigo, maiorAmigo);
                break;
            }else{
                menorAmigo++;
            }
        }
    }

    return 0;
}