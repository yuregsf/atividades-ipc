#include <stdio.h>

int main(){
    int n, i, prefixo, j, tamanhoPalavra;
    char palavra[500];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        tamanhoPalavra = 0;
        scanf(" %d ", &prefixo);
        scanf("%[^\n]s", palavra);
        for (j = 0; palavra[j] != '\0'; j++){
            tamanhoPalavra++;
        }
        if(prefixo > tamanhoPalavra){
            prefixo = tamanhoPalavra;
        }
        palavra[prefixo] = '\0';
        for (j = 0; j < prefixo; j++){
            printf("%c", palavra[j]);
        }
        printf("\n");
    }
    return 0;
}