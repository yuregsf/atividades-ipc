#include <stdio.h>

int contaDistancia(int *vetor, int tamanho);
int absoluto(int n);

int main(){
    int n, i, j, tamanho, vetor[1000], menorDistancia;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &tamanho);
        for (j = 0; j < tamanho; j++){
            scanf("%d", &vetor[j]);
        }
        menorDistancia = contaDistancia(vetor, tamanho);
        printf("%d %d\n", menorDistancia, tamanho*tamanho);
    }
    return 0;
}

int contaDistancia(int *vetor, int tamanho){
    int i, j, menorDistancia = absoluto(vetor[0] - vetor[1]);
    for (i = 0; i < tamanho; i++){
        for (j = i+1; j < tamanho; j++){
            if(absoluto(vetor[i] - vetor[j]) < menorDistancia){
                menorDistancia = absoluto(vetor[i] - vetor[j]);
            }
        }
    }
    return menorDistancia;    
}

int absoluto(int n){
    if(n < 0){
        return -n;
    }
    return n;
}