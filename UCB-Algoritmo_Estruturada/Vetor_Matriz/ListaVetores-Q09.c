/*os tr�s empregados mais recentes
ler n�mero indeterminado de informa��es (m�ximo de 50) 
com matr�cula do empregado 
com os meses de trabalho deste empregado
Mostre os tr�s empregados mais recentes. 
N�o existem dois empregados admitidos no mesmo m�s e
a matr�cula igual a zero �0� encerra a leitura.
*/
#include <stdio.h>

int main(){
	
	int x, y, menosMeses;
	int matricula[5], meses[5];
	
	//printf ("Digite 1 para come�ar o programa e 0 para sair: ");
	//scanf  ("%d", &matricula[x]);
	
	//while (matricula[x]!= 0){
		for (x =0; x < 5; x++){
		printf ("Informe o resgitro do empregado %d: ",x+1);
		scanf  ("%d", &matricula[x]);
		printf ("Informe os meses trabalhados do empregado %d: ",x+1);
		scanf  ("%d", &meses[x]);
		if (meses[x] < meses[x+1]){
			menosMeses = matricula[x];
		}
	}
	//}
	for (x =0; x < 5; x++){
		if (meses[x] < meses[x+1]){
			menosMeses = matricula[x];
		}
	}
	
	printf ("Esse e' o funcionario mais novo %d", menosMeses);
	
	return 0;
}
