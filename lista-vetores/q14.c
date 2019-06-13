#include <stdio.h>

int contaFrequencia(int *vetor, int numero, int tamanho);

int main(){
    int n, i, vetor[1000000], indiceMaiorFrequencia = 0, maiorFrequencia = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);        
        if(contaFrequencia(vetor, vetor[i], i+1) > maiorFrequencia){
            maiorFrequencia = contaFrequencia(vetor, vetor[i], i+1);
            indiceMaiorFrequencia = i;
        }

    }

    printf("%d\n%d\n", vetor[indiceMaiorFrequencia], maiorFrequencia);
    return 0;
}

int contaFrequencia(int *vetor, int numero, int tamanho){
    int i, frequencia = 0;
    for (i = 0; i < tamanho; i++){
        if(vetor[i] == numero){
            frequencia += 1;
        }
    }
    return frequencia;
}