#include <stdio.h>

void main()
{
	int contador, i, j, n, trunc, aux;
	char vetor[1000];
	char invertido[1000];

	scanf("%d", &n);
	getchar();

	for (i = 0; i < n; i++){
		contador = 0;

		scanf("%[^\n]", vetor);
		getchar();

		for (j = 0; vetor[j] != '\0'; j++){

			if ((vetor[j] >= 'a' && vetor[j] <= 'z') || (vetor[j] >= 'A' && vetor[j] <= 'Z')){
				vetor[j] = vetor[j] + 3;
			}

			contador++;
		}

		aux = contador;

		for (j = 0; j < contador; j++){
			invertido[aux - 1] = vetor[j];
			aux--;
		}

		trunc=contador/2;
		
		for(j=trunc;j<contador;j++){
			invertido[j]=invertido[j]-1;
			
		}

		printf("Vetor= %s\n", invertido);
	}
}