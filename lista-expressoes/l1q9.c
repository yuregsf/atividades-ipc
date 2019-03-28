#include <stdio.h>
#include <math.h>

int main(){
    float numero;
    scanf("%f", &numero);    
    printf("%f\n", (int)numero + round((numero - (int)numero)*10)/10);
    printf("%f\n", (int)numero + round((numero - (int)numero)*100)/100);
    printf("%f\n", (int)numero + round((numero - (int)numero)*1000)/1000);
    return 0;
}