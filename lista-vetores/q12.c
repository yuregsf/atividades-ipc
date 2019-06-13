#include <stdio.h>

int main(){
    int n, i, maior = 0, menor = 0, v[1000];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
        if(i == 0){
            maior = v[i];
            menor = v[i];
        }
        if(maior < v[i]){
            maior = v[i];
        }
        if(menor > v[i]){
            menor = v[i];
        }
    }

    for (i = 0; i < n; i++){
        printf("%d", v[i]);
        if(i + 1 <n){
            printf(" ");
        }
    }
    printf("\n");
    for (i = n-1; i >= 0; i--){
        printf("%d", v[i]);
        if(i - 1 >= 0){
            printf(" ");
        }
    }
    printf("\n");
    printf("%d\n%d\n", maior, menor);
    
    return 0;
}