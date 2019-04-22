#include <stdio.h>

int main(){
    int i, j, vezes, n = 5, m, soma = 0;
    scanf("%d", &vezes);
    
    for(i=0; i<vezes; i++){
        while(1){
            soma = 0;
            for(j = 1; j < n; j++){
                if(n%j == 0){
                    soma += j;
                }
            }
            m = soma;
            soma = 0;
            for(j = 1; j<m; j++){
                if(m%j == 0){
                    soma += j;
                }
            }
            if(soma == n && n < m){
                printf("(%d,%d)\n", n, m);
                n++;
                break;
            }else{
                n++;
            }
        }
    }

    return 0;
}