#include <stdio.h>

int main(){
    unsigned int cidadeA, cidadeB, anos =0;
    scanf("%d", &cidadeA);
    scanf("%d", &cidadeB);
    while(cidadeA < cidadeB){
        cidadeA += cidadeA*0.03;
        cidadeB += cidadeB*0.015;
        anos++;
    }
    printf("ANOS = %d\n", anos);
    return 0;
}