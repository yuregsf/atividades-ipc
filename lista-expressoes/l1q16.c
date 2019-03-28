#include <stdio.h>

int main(){
    int numero, d0, d1, d2;
    scanf("%d", &numero);

    d0 = (int)(numero/100);
    d1 = (int)((numero-d0*100)/10);
    d2 = numero - d0*100 - d1*10;

    numero = d2*100+d1*10+d0;

    printf("%d\n", numero);

    return 0;
}