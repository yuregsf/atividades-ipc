#include <stdio.h>

int main(){
    int n, auxn, i, auxi, auxj, j, last, soma = 0;
    scanf("%d", &n);
    printf("%d = ", n);

    for(i = 1; i<n; i++){
        auxi = i;
        if(n%i == 0){
            last = auxi;
        }
    }

    for(j = 1; j<n; j++){
        auxj = j;
        if(n%j == 0){
            soma += auxj;
            if(auxj != last){
                printf("%d + ", auxj);
            }
            if(auxj == last){
                printf("%d ", auxj);
            }
        }
    }

    last = auxj;
    printf("= %d ", soma);

    if(soma == n){
        printf("(NUMERO PERFEITO)\n");
    }else{
        printf("(NUMERO NAO E PERFEITO)\n");
    }
    return 0;
}