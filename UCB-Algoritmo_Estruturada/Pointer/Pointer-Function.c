#include <stdio.h>

int main(){
	
	void testeVariavel (int x);
	void testePonteiro (int *pX);
	int teste = 1;
	int *pTeste = &teste;
	//valor da L7
	printf ("VALOR TESTE MAIN: %d\n", teste);
	
	testeVariavel(teste);// roda a fun��o e outro espa�o na memoria � utilizado
	testePonteiro(pTeste);// endere�o da memoria como parametro
	/*
	No primeiro caso (L12) cria�a outro espa�o na memoria, como se houvesse outra variavel
	----------------------------
	No segundo caso (L13) o endere�o � passado como parametro para a funcao com isso n�o h� 
	a chance de cria��o dessa "2a variavel".
	*/
	printf ("VALOR PONTEIRO MAIN:%d\n", teste);
	
	getchar();
	return 0;
}

void testeVariavel (int x){
	x++;
	// "2a variavel"
	printf ("VALOR TESTE FUNCAO:%d\n", x);
}

void testePonteiro (int *pX){
	++*pX;
}
