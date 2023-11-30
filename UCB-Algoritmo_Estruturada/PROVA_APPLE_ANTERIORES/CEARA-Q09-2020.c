#include <stdio.h>

int main (){
	
	int vetor[] = {5,4,3,2,1};
	int *v = vetor;
	
	int soma = 0;
	
	int *p = &soma;
	int x;
	
	for (x=0; x<5; ++x){
		if (x % 2 == 0){
			soma = soma + vetor[x];
			printf ("Resultado = %d", soma);
		} else {
			*p = *p + *(v + x);
		}
	}
	
	printf ("Resultado = %d", soma);
	return 0;
}
