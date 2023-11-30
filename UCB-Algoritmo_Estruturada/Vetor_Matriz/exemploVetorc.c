#include <stdio.h>

int main (){
	
	char vetor[100] = {'e','d','u','a','r','d','a',' ','m','a','r','t','i','n','s',' ','m','o','r','e','i','r','a'};
	
	printf ("%%S = %s\n", vetor);
	
	int x;
	
	
	for (x=0;x<24;x++){
		printf ("%c", vetor[x]);
	}
}
