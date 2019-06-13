#include <stdio.h>

int main(){
    int n, i, j, k, tamanhoTexto;
    char texto[1000], aux;
    scanf("%d%*c", &n);

    for(i = 0; i<n; i++){
        scanf("%[^\n]%*c", texto);
        for(j = 0; texto[j] != '\0'; j++){
            if((texto[j] >= 'a' && texto[j] <= 'z') || (texto[j] >= 'A' && texto[j] <= 'Z')){
                texto[j] += 3;
            }
        }
        tamanhoTexto = j;
        for(k = j-1, j = 0; k >= j; k--, j++){
            aux = texto[j];
            texto[j] = texto[k];
            texto[k] = aux;
        }
        for(j = tamanhoTexto/2; texto[j] != '\0'; j++){
            texto[j] -= 1;
        }
        printf("%s\n", texto);
        
    }
    return 0;
}