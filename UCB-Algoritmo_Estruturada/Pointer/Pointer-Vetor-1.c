#include <stdio.h>

int main (){
	
	int vetor[3] = {1,2,3};
	int *pVetor = vetor;// caso deixe assim o pointer vai pegar o endere�o do 1 valor
/*	int *pVetor = &vetor[2]; nesse caso o [endere�o], 
	vai ser direcionado "for�ado" a ir para o que foi digitado entre []
*/

	printf ("%d", *pVetor);

	getchar();
	return 0;
}
