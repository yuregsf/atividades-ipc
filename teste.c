#include <stdio.h>

int main()
{
	int n, i1, i2, j1, j2, soma1, soma2, aux1, aux2, x;
	int a, b;

	scanf("%d", &n);

	if (n >= 9)
		return 0;

	soma1 = 0;
	soma2 = 0;
	x = 1;
	aux1 = 0;
	aux2 = 0;
	a = 0;
	b = 0;

	while (x <= n){
		for (i1 = 1; i1 <= 100000; i1++){
			for (j1 = 1; j1 <= i1 / 2; j1++){
				if (i1 % j1 == 0){
					soma1 = aux1 + j1;
					aux1 = soma1;
					a += i1;
				}
			}
			for (i2 = 1; i2 <= 100000; i2++){
				for (j2 = 1; j2 <= i2 / 2; j2++){
					if (i2 % j2 == 0){
						soma2 = aux2 + j2;
						aux2 = soma2;
						b += i2;
					}
				}
				if (soma1 == i2 && soma2 == i1){
					printf("(%d,%d)\n", i1, i2);
					x++;
				}
			}
		}
	}

	return 0;
}