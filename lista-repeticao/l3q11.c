#include <stdio.h>

int main(){
    int n = 0, i = 0, prev = 0, cur, count, max;

    scanf("%d", &n);
    max = count = scanf("%d", &prev);
    for(i = 1; i < n; ++i){
        if(scanf(" %d", &cur))
            count = (cur>prev) ? (count + 1) : ((max = max>count ? max : count), 1);
        prev = cur;
    }
    max = max>count ? max : count;

    printf("O comprimento do segmento crescente maximo e: %d\n", max);
    return 0;
}