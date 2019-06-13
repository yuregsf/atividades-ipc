#include <stdio.h>
#include <math.h>

int main(){
    double x, y = 0, fatorial = 1, j;
    int n, i;
    scanf("%lf", &x);
    scanf("%d", &n);
    for(i = 0; i <= n; i++){
        for(j = 0; j <= i; j++){
            if(j == 0){
                fatorial = 1;
            }else{
                fatorial *= j;
            }
        }
        y += (pow(x, i))/fatorial;
    }

    printf("e^%.2lf = %.6lf\n", x, y);

    return 0;
}