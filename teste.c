#include <stdio.h>

int main(){
	int m;
	double h, vh, s;
	
	while(m != 0 && h != 0 && vh != 0){
		scanf("%d %f %f", &m, &h, &vh);
		getchar();
		if(m != 0){
		 	printf("%d %.2lf\n", m, h * vh);    
		}	
	} 

	return 0;
}