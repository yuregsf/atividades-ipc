#include <stdio.h>

int main(){
    int i, j, m, n;
    scanf("%d %d", &m, &n);

    for(i = 1; i<=m; i++){
        for(j = 1; j<=n; j++){
            if(j<i){
                printf("(%d,%d)", i, j);
            }
            if(j<i && j+1 != i && j != n){
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}