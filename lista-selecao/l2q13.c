#include <stdio.h>

int main(){
    int a,b,c,d, maior;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if(a>=b && a>=c && a>=d){
        maior = a;
    }else if(b>=a && b>=c && b>=d){
        maior = b;
    }else if(c>=a && c>=b && c>=d){
        maior = c;
    }else if(d>=a && d>=b && d>=c){
        maior = d;
    }
    
    printf("%d\n", a+b+c+d-maior);
    return 0;
}