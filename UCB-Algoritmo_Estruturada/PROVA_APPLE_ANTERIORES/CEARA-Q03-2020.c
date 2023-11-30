#include <stdio.h>
#include <string.h>
#include "queue.h"

int main (){
	char frase[] = {"Apple Developer Academy"};
	int nDeCaracter = strlen(frase);
	int i;
	
	for(x=0; x<nDeCaracter; x++){
		enqueue(frase[x]);
	}
	
	for(x=0; x<nDeCaracter; x++){
		printf("%c", dequeue());
	}	
	
	return 0;
}
