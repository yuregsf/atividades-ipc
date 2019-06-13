#include <stdio.h>
#include <string.h>
int main(){
    int n, j;
    char alfabeto[26], i, textoA[10000], textoB[10000];
    scanf("%d", &n);
    for (i = 'a', j = 0; j < 26; i++, j++){
        alfabeto[j] = i;
    }
    
    for(i = 0; i < n; i++){
        scanf("%s %s", textoA, textoB);
        for(j = 0; j<strlen(textoA); j++){
            
        }
    }
    return 0;
}