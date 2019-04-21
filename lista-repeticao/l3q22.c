#include <stdio.h>
#include <math.h>

int main(){
    int n, i, j, hipotenusa, cateto1, cateto2;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        for(j = 1; j<i; j++){
            cateto1 = sqrt(i*i-j*j);
            if(j<cateto1){
                printf("hipotenusa = %d, catetos %d e %d\n", i, j, cateto1);
            }
        }
    }
    
    return 0;
}
