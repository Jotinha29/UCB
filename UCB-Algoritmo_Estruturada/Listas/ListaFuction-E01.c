#include <stdio.h>
/*Altura de cinco pessoas
média aritmética entre elas
calculada por uma função*/
int main(){
	
	float altura[5];
	int x;
	void Media(float altura[], int n);
	
	for(x=0; x<5; x++){
		printf ("Informe a altura da pessoa %d:", x+1);
		scanf  ("%f", &altura[x]);
	}
	
	for(x=0; x<5; x++){
		printf ("\nAltura da pessoa %d: %.2f", x+1, altura[x]);
	}
	
	Media(altura, 10);
	
	return 0;
}

void Media(float altura[], int n){
	
	int x;
	float y, media;

	for(x=0; x<5; x++){
		y = y + altura[x];
	}
	
	media = y/5;
	
	printf ("\n\nA media das alturas e' %.2f", media);
	
}


