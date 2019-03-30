#include <stdio.h>

int main(){
    float a, b, c, aux;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(c <= a){
        aux = a;
        a = c;
        c = b;
        b = aux;
    }else if(b <= a){
        aux = a;
        a = b;
        b=aux;
    }
    if(c <= b){
        aux = b;
        b = c;
        c = aux;
    }
    printf("%.2f, %.2f, %.2f\n", a,b,c);  

    return 0;
}