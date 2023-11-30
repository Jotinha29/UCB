#include <stdio.h>

int main (){
	
	int x = 456123;
	
	printf("Valor...: %d\n", x);
	printf("Endereco: %d\n", &x);
	
	int *pointer;
	pointer = &x;
	
	printf("\n*Pointer: %d\n", *pointer);
	// ponteiro com * = valor 
	printf("\nPointer: %d\n", pointer);
	// ponteiro sem * = endereço 
	
	getchar();
	return 0;
}
