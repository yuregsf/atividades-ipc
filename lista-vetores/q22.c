#include <stdio.h>

int contaUnico(int *vetor, int valor, int n);

int main(){
    int n, i, vetor[4999], j, vezes = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i<n; i++){
        if(contaUnico(vetor, vetor[i], n) == 0){
            vezes++;
        }
    }

    printf("%d\n", vezes);
    return 0;
}

int contaUnico(int *vetor, int valor, int n){
    int i, j, flag = 0;

    for(i = 0; i < n; i++){
            if(vetor[i] == valor){
                if(flag > 0){
                    return 1;
                }else{
                    flag++;
                }
            }
        }
    return 0;
}