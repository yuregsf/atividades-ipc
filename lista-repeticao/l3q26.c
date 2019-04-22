#include <stdio.h>

int main(){
    int n, i, soma = 0;
    scanf("%d", &n);
    printf("%d = ", n);
    for(i = 1; i<n; i++){
        if(n%i == 0){
            soma += i;
            if(n%(i+1) == 0){
                printf("%d + ", i);
            }
        }
    }
    printf("= %d", soma);
    if(soma == n){
        printf(" (NUMERO PERFEITO)\n");
    }else{
        printf(" (NUMERO NAO E PERFEITO)\n"); 
    }
    return 0;
}