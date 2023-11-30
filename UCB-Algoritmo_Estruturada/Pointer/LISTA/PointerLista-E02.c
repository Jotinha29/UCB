/*
2) Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do teclado. 
Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	int a, b;
	int *pA, *pB;
	
	pA = &a;
	pB = &b;
	
	printf("Informe dois valores inteiros:\n1o: ");
	fflush(stdin);
	scanf("%d", &a);
	printf("2o: ");
	fflush(stdin);
	scanf("%d", &b);
	
	setlocale(LC_ALL, "Portuguese");// fun��o da biblioteca locale.h
	
	if (*pA>*pB){
		printf("1o Valor (%d) � MAIOR e seu endere�o � %d", *pA, pA);
	} else {
		printf("2o Valor (%d) � MAIOR e seu  endere�o � %d", *pB, pB);
	}
	
	//o endere�o de um sempre vai ser maior, porque aumentra 4 bytes
	
	getchar();
	return 0;
}

