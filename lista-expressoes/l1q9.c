#include <stdio.h>
#include <math.h>

int main(){
    float numero, temp1, temp2, temp3;
    scanf("%f", &numero);    
    temp1 = (int)numero + round((numero - (int)numero)*10)/10;
    temp2 = (int)numero + round((numero - (int)numero)*100)/100;
    temp3 = (int)numero + round((numero - (int)numero)*1000)/1000;

    printf("%f\n", temp1);
    printf("%f\n", temp2);
    printf("%f\n", temp3);
    return 0;
}