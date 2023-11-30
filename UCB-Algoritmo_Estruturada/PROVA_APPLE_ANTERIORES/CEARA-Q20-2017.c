#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente{
	int codigo;
	char nome[80];
	char fone[15];
};

int main(){
	struct cliente *clil, cli2;
	clil = malloc(sizeof(struct cliente));
	
	cli2.codigo = 10;
	strcpy(cli2.nome, "joao");
	strcpy(cli2.fone, "3333-4444");
	
	clil->codigo = ++cli2.codigo;
	ctrcpy(clil->nome, "maria");
	ctrcpy(clil->fone, cli2.fone);
	
	printf("%d %s %s %d %s %s \n", clil->codigo, clil->nome, clil->fone, cli2.codigo, cli2.nome, cli2.fone);
	
	free(clil);
	
	return 0;
}
