#include <stdio.h>

int main(){
    int n, i, a, b, vetor[12221], j, numero, cont=0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        cont = 0;
        for(j = b; j>=a; j--){
            numero = j;
            while(numero != 0){
                vetor[cont] = numero%10;
                numero /= 10;
                cont++;
            }
        }
        for(j = cont-1; j>=0; j--){
            printf("%d", vetor[j]);
        }
        for(j = 0; j<cont; j++){
            printf("%d", vetor[j]);
        }
        printf("\n");
    }
    return 0;
}