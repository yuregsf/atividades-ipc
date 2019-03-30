#include <stdio.h>

int main(){
    int i;
    float a, b, c, aux;

    scanf("%d", &i);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(i == 1){
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
        printf("%.2f %.2f %.2f\n", a, b, c);
    }else if(i == 2){
        if(c >= a){
            aux = a;
            a = c;
            c = b;
            b = aux;
        }else if(b >= a){
            aux = a;
            a = b;
            b=aux;
        }
        if(c >= b){
            aux = b;
            b = c;
            c = aux;
        }
        printf("%.2f %.2f %.2f\n", a, b, c);
    }else if(i == 3){
        if(c >= b){
            aux = b;
            b = c;
            c = aux;
        }if(a >= b){
            aux = b;
            b = a;
            a = aux;
        }if(a < c){
            aux = c;
            c = a;
            a = aux;
        }
        printf("%.2f %.2f %.2f\n", a, b, c);
    }
    return 0;
}