#include <stdio.h>

int buscaCaracter(char * vetor, char caracter);

int main(){
    int n, i, indiceEncontrado;
    char caracter, vetor[500];
    scanf("%d%*c", &n);
    for(i = 0; i < n; i++){
        scanf("%c\040%[^\n]%*c", &caracter, vetor);
        indiceEncontrado = buscaCaracter(vetor, caracter);
        if(indiceEncontrado != -1){
            printf("Caractere %c encontrado no indice %d da string.\n", caracter, indiceEncontrado);
        }else{
            printf("Caractere %c nao encontrado.\n");
        }
    }
    return 0;
}

int buscaCaracter(char * vetor, char caracter){
    int i;
    for (i = 0; vetor[i] != '\0'; i++){
        if(vetor[i] == caracter){
            return i;
        }
    }
    return -1;
}