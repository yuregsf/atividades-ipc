#include <stdio.h>

int main(){
    int n1, n2, n3, mmc = 1, cont = 2;
    scanf("%d %d %d", &n1, &n2, &n3);

    while(n1 != 1 || n2 != 1 || n3 != 1){
        if(n1%cont == 0 || n2%cont == 0 || n3%cont == 0){
            printf("%d %d %d :%d\n", n1, n2, n3, cont);
            n1 = n1%cont == 0? n1/cont : n1;
            n2 = n2%cont == 0? n2/cont : n2;
            n3 = n3%cont == 0? n3/cont : n3;
            mmc *= cont;
        }else{
            cont++;
        }
    }
    printf("MMC: %d\n", mmc);
    return 0;
}