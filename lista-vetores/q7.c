#include <stdio.h>

int descobreNumero(char *cNumero);

int main(){
    char cNumero[6];
    int n, i;

    scanf("%d%*c", &n);
    for(i = 0; i < n; i++){
        scanf("%[^\n]%*c", cNumero);
        if(descobreNumero(cNumero) != 0){
            printf("%d\n", descobreNumero(cNumero));
        }else{
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

int descobreNumero(char *cNumero){
    char one[] = "one  ";
    char two[] = "two  ";
    char three[] = "three";
    int i = 0, acertoOne = 0, acertoTwo = 0, acertoThree = 0;

    while(cNumero[i] != '\0'){
        acertoOne = cNumero[i] == one[i] ? acertoOne : acertoOne + 1;
        acertoTwo = cNumero[i] == two[i] ? acertoTwo : acertoTwo + 1;
        acertoThree = cNumero[i] == three[i] ? acertoThree : acertoThree + 1;
        i++;
    }
    if(acertoOne <= 1){
        return 1;
    }else if(acertoTwo <= 1){
        return 2;
    }else if(acertoThree <= 1){
        return 3;
    }else{
        return 0;
    }
}