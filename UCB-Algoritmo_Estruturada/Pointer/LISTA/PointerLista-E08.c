/*
8) Fun��o que receba dois par�metros: um vetor e um valor do mesmo tipo do vetor. 
A fun��o dever� preencher os elementos de vetor com esse valor. 
Utilize aritm�tica de ponteiros.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

int func(int vetor[], int x){
	int y = 0;
	
	for(y=0; y<TAM; y++){
		x = vetor[y];
	}
	
	for(y=0; y<TAM; y++){
		printf("%d", vetor[y]);
	}
	
}

int main(){
	
	int v[] = {1,2,3,4,5};
	int x=45;
	
	func(v[TAM], x);
	
	getchar();
	return 0;
}
