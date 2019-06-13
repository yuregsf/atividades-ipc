#include <stdio.h>

int main(){
    int n, i, vetor[10000], maior = 0, ultima, frequencia = 0, indiceMaior=0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
        if(maior < vetor[i]){
            maior = vetor[i];
            indiceMaior = i;
        }
    }
    ultima = vetor[i-1];
    for (i = 0; i < n; i++){
        if(ultima == vetor[i]){
            frequencia++;
        }
    }
    printf("Nota %d, %d ", ultima, frequencia);
    if(frequencia == 1){
        printf("vez\n");
    }else{
        printf("vezes\n");
    }
    printf("Nota %d, indice %d\n", maior, indiceMaior);

    return 0;
}