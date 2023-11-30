/*
1) Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.
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
	
	if (pA>pB){
		printf("1o � MAIOR seu endere�o � %d", pA);
	} else {
		printf("2o � MAIOR seu endere�o � %d", pB);
	}
	
	//o endere�o de um sempre vai ser maior, porque aumenta 4 bytes.
	
	getchar();
	return 0;
}
