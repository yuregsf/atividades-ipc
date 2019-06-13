#include <stdio.h>

int main(){
    int n, k, presentes, i, j;
    int alunos[1000];

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++){
        scanf("%d", &alunos[i]);
    }
    presentes = 0;
    for(j = 0; j<n; j++){
        if(alunos[j] <= 0){
            presentes++;
        }
    }
    if(presentes >= k){
        printf("NAO\n");
        for(j = n-1; j>=0; j--){
            if(alunos[j] <= 0){
                printf("%d\n", j+1);
            }
        }
    }else{
        printf("SIM\n");
    }
    
    return 0;
}