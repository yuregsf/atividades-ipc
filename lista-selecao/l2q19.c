#include <stdio.h>

int main(){
    float a, b, c, d, aux;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    int i;
    for(i = 0; i<=1; i++){

        if(d <= a){
            aux = a;
            a = d;
            d = c;
            c = b;
            b = aux;
        }if(c <= a){
            aux = a;
            a = c;
            c = b;
            b = aux;
        }if(b <= a){
            aux = a;
            a = b;
            b = aux;
        }
        if(d <= b){
            aux = b;
            b = d;
            d = c;
            c = aux;
        }if(c <= b){
            aux = b;
            b = c;
            c = aux;
        }
        if(d <= c){
            aux = c;
            c = d;
            d = aux;        
        }
    }
    printf("%.2f, %.2f, %.2f, %.2f\n", a,b,c, d);  

    return 0;
}