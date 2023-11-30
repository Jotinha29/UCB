#include <stdio.h>

int main(){
	
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;// O endere�o do pointer � igual ao endere�o de X.
	//              pX = &x; O endere�o do pointer � igual ao endere�o de X.
	//             *pX = &x; O endere�o do pointer � igual ao valor de X(10).
	double *pY = &y;
	char *pZ = &z;
	
	printf("Valor INT...: %d\n", *pX);
	printf("Endereco INT: %d\n", pX);
	printf("\nValor DOUBLE...: %f\n", *pY);
	printf("Endereco DOUBLE: %d\n", pY);
	printf("\nValor CHAR...: %c\n", *pZ);
	printf("Endereco CHAR: %d\n", pZ);
	
	// *pX = valor
	//  pX = Endere�o
	
	//manipul��o com poniter
	double soma = *pX + *pY;
	
	printf("\nSoma(ponteiros)");
	printf("\n%d(*pX) + %.2f(*pY) = %.2f\n", *pX, *pY, soma);
	
	//pegando o endere�o de uma variavel e atribuindo ao pointer
	int *p= 6487540;// apos printar o endere�o no 1o printf, igualar o endere�o(numerico) ao *p
	printf("\nValor INT...: %d\n", *p);
	
	getchar();
	return 0;
}
