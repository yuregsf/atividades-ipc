#include <stdio.h>

int main(){
    int a,b,c, aux;
    char x,y,z;

    scanf("%d %d %d\n", &a,&b,&c);

    if(a <= 100 && b <= 100 && c <= 100){
    scanf("%c%c%c", &x,&y,&z);
        if(c <= a){
            aux = a;
            a = c;
            c = b;
            b = aux;
        }else if(b <= a){
            aux = a;
            a = b;
            b=aux;
        }
        if(c <= b){
            aux = b;
            b = c;
            c = aux;
        }

        if(x == 'A' && y == 'B' && z == 'C'){
            printf("%d %d %d\n", a,b,c);
        }else if(x == 'A' && y == 'C' && z == 'B'){
            printf("%d %d %d\n", a,c,b);
        }else if(x == 'B' && y == 'A' && z == 'C'){
            printf("%d %d %d\n", b,a,c);
        }else if(x == 'B' && y == 'C' && z == 'A'){
            printf("%d %d %d\n", b,c,a);
        }else if(x == 'C' && y == 'A' && z == 'B'){
            printf("%d %d %d\n", c,a,b);
        }else if(x == 'C' && y == 'B' && z == 'A'){
            printf("%d %d %d\n", c,b,a);
        }
    }

    return 0;
}