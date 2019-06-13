#include <stdio.h>

double compute_pi(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%.12lf\n",compute_pi(n));
    return 0;
}

double compute_pi(int n){
    int i,j;
    double resultado = 1, numerador = 0;
    for(i = 1; i <= n; i++){
        if(i%2 == 1){
            numerador += 2;
            resultado *= numerador/(numerador-1);
        }else{
            resultado *= numerador/(numerador+1);
        }
    }
    

    return resultado*2;    
}