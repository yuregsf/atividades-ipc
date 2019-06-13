#include <stdio.h>

int main(){
    int n, m, i, j;
    char buffer[1000000];
    while(scanf("%d %d", &n, &m) && n != 0 && m != 0){
        j = 0;
        sprintf(buffer, "%d", m+n);
        for(i = 0; buffer[i] != '\0'; i++){
            if(buffer[i] != '0'){
                printf("%c", buffer[i]);
            }
        }
        printf("\n");
    }    
    return 0;
}