#include <stdio.h>

int main(){
    int n, i, j, hipotenusa, cateto1, cateto2;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        for(j = i/2; j<i; i++){
            cateto1 = i/2;
            cateto2 = i/2 + 1;
            while(cateto1*cateto1 + cateto2*cateto2 != i*i){
                cateto1++;
            }
        }
    }
    
    return 0;
}