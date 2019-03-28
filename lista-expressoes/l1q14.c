#include <stdio.h>
#include <math.h>

int main(){    
    int numero, controle, d0, d1, d2;
    scanf("%d", &numero);
    d0 = (int)(numero/100);
    d1 = (int)((numero-d0*100)/10);
    d2 = numero - d0*100 - d1*10;
    controle = (d0+d1*3+d2*5)%7;

    printf("O NOVO NUMERO E = %d\n", numero*10+controle);

    return 0;
}