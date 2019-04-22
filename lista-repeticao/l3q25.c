#include <stdio.h>

int main(){
    int n, i, menor, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("%d*%d*%d = ", i,i,i);
        menor = i*i-(i-1);
        for(j = 0; j < i; j++){
            printf("%d", menor);
            menor+=2;
            if(j+1 != i){
                printf("+");
            }
        }
        printf("\n");
    }
    return 0;
}