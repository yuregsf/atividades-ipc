#include <stdio.h>

int main(){
    float a,b,c,d,e,f,x,y, memoria;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    y = (d*c-a*f)/(d*b-a*e);
    x = (e*c-b*f)/(a*e-b*d);
    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);

    return 0;
}