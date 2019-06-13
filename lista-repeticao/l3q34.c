#include <stdio.h>

int main(){
    int n, j;

    do{
        scanf("%d", &n);
        if(n <= 1){
            printf("Fatoracao nao e possivel para o numero %d!\n", n);
            n = 0;
            continue;
        }else{
            printf("%d = ", n);
            for(j = 2; j <= n; j++){
                while(n%j == 0){
                    n /= j;
                    printf("%d", j);
                    if(n/j+1 > 1){
                        printf(" x ");
                    }
                }
            }
            break;
        }

    }while(n != 1);
    printf("\n");
    return 0;
}