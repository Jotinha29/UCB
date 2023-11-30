#include <stdio.h>
#include <stdbool.h>

struct dicionario{
	char palavra[20];
	char definicao[500];
}diciPortugues[7], lingua[1];

bool compararStrings(const char palavra1[], const char palavra2[]){

	int x;
	
	while (palavra1[x] == palavra2[x] && palavra1[x] != '\0' && palavra2[x] != '0'){
		x++;
	}	

	if (palavra1[x] == '\0' && palavra2[x] == '0'){
		return true;
	} else {
		return false;
	}
}

int procurarStrings (const struct dicionario lingua[], const char procurar [], const int numDePalavras){
	
	bool compararStrings(const char palavra1[], const char palavra2[]);
	
	int x=0;
	
	while (x < 7){
		if (compararStrings(procurar, lingua[x].palavra)){
			return x;
		}else{
			x++;
		}
	}
	return -1;
}

int main(){
	
	int procurarStrings (const struct dicionario lingua[], const char procurar [], const int numDePalavras);
	
	const int NUMERODEDEFINICOES = 7;
	//char palavra[20] = {'\0'};
	int resultadoPesquisa, palavra;
	const struct dicionario diciPortugues[7] = {
	{"Duda","Maneira da Eduarda olhar mais rapido."},
	{"Amor","Jeito mais utilizado por Duda, Amor - sentimento por Jota."},	
	{"Vida","Jeito mais utilizado por Jota, pois ele acha q nao havera uma vida sem Eduarda."},	
	{"Amore Mio","Vicio de fala que adquirimos dps dos meus parentes virem pra ca."}, 	
	{"MO","Momento de extrema carencia do namorado ou namorada."},
	{"EDUARDA","Momento de estresse com Eduarda."},	
	{"insuportavel","Nome dado a Eduarda, quando ela tira o dia pra me pirracar."}	};
	
	printf("+-----------------------------------------------+\n");
    printf("|           BEM VINDO AO DICIONARIO             |\n");
    printf("+-----------------------------------------------+\n");
    printf("|         DIGITE PARA SABER O SIGNIFICADO       |\n");
    printf("+-----------------------------------------------+\n");
	printf("| Duda                            ||   [1]      |\n");
    printf("+-----------------------------------------------+\n");
    printf("| Amor                            ||   [2]      |\n");
    printf("+-----------------------------------------------+\n");
    printf("| Vida                            ||   [3]      |\n");
    printf("+-----------------------------------------------+\n");
    printf("| Amore Mio                       ||   [4]      |\n");
    printf("+-----------------------------------------------+\n");
    printf("| Mo                              ||   [5]      |\n");
    printf("+-----------------------------------------------+\n");
    printf("| EDUARDA                         ||   [6]      |\n");
    printf("+-----------------------------------------------+\n");
    printf("| INSUPORTAVEL                    ||   [7]      |\n");
    printf("+-----------------------------------------------+\n");
    /*
    arrumar depois para ir por comparação de strings 
     
	scanf ("%s", &palavra);
    
    resultadoPesquisa = procurarStrings(diciPortugues, palavra, NUMERODEDEFINICOES);
    
    if(resultadoPesquisa != -1){
    	printf("%s\n", diciPortugues[resultadoPesquisa].definicao);
	} else {
		printf("PALAVRA NAO ENCONTRADA");
	}
	*/
	printf("Digite o numero desejado: ");
	scanf ("%d", &palavra);
	
	switch(palavra){
		case 1: 
		printf("%s\n", diciPortugues[0].definicao);
		break;
		case 2: 
		printf("%s\n", diciPortugues[1].definicao);
		break;
		case 3: 
		printf("%s\n", diciPortugues[2].definicao);
		break;
		case 4: 
		printf("%s\n", diciPortugues[3].definicao);
		break;
		case 5: 
		printf("%s\n", diciPortugues[4].definicao);
		break;
		case 6: 
		printf("%s\n", diciPortugues[5].definicao);
		break;
		case 7: 
		printf("%s\n", diciPortugues[6].definicao);
		break;
	}
	
	system ("pause");
	return 0;
}
