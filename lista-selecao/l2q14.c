#include <stdio.h>

int main(){
    int data, dia, mes, ano;
    scanf("%d", &data);
    dia = data/1000000;
    mes = data/10000 - dia*100;
    ano = data - mes*10000 - dia*1000000;

    if(mes<=12){
        if(mes == 1 && dia <= 31){
            printf("%d de janeiro de %d\n", dia, ano);
        }else if(mes == 2 && dia <= 28){
            printf("%d de fevereiro de %d\n", dia, ano);
        }else if(mes == 3 && dia <= 31){
            printf("%d de março de %d\n", dia, ano);
        }else if(mes == 4 && dia <= 30){
            printf("%d de abril de %d\n", dia, ano);
        }else if(mes == 5 && dia <= 31){
            printf("%d de maio de %d\n", dia, ano);
        }else if(mes == 6 && dia <= 30){
            printf("%d de junho de %d\n", dia, ano);
        }else if(mes == 7 && dia <= 31){
            printf("%d de julho de %d\n", dia, ano);
        }else if(mes == 8 && dia <= 31){
            printf("%d de agosto de %d\n", dia, ano);
        }else if(mes == 9 && dia <= 30){
            printf("%d de setembro de %d\n", dia, ano);
        }else if(mes == 10 && dia <= 31){
            printf("%d de outubro de %d\n", dia, ano);
        }else if(mes == 11 && dia <= 30){
            printf("%d de novembro de %d\n", dia, ano);
        }else if(mes == 12 && dia <= 31){
            printf("%d de dezembro de %d\n", dia, ano);
        }else{
            printf("Data invalida!\n");
    }
    }else{
        printf("Data invalida!\n");
    }

    return 0;
}