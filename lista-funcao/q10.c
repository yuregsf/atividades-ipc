#include <stdio.h>
#include <math.h>

void next_power(int n, int p, int *base);

int main(){
    int n, p, resultado, base = 1;
    scanf("%d %d", &n, &p);
    next_power(n, p, &base);
    printf("%d -> %d^%d = %.0lf\n", n, base, p, pow(base, p));
    return 0;
}

void next_power(int n, int p, int *base){
    int i=0;

    while(pow(i, p) < n){
        ++i;
    }
    if((pow(i, p) - n) < (n - pow(i-1, p))){
        *base = i;
    }else{
        *base = i-1;
    }

}