#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ERRO printf("\nVALOR INVALIDO\n");
#define PRINT(p1) printf("%f\n", p1);
#define SOMAR(p1, p2) (p1+p2)

int main(){

    int n;
    printf("Informe um numero de 1 de 10: ");
    scanf("%d", &n);

    if((n<1) || (n>10)){
        ERRO;
    } else {
        printf("Seu numero esta entre 1 e 10, numero: %d", n);
    }

    float valor;
    
    printf("\nInforme o valor desejado: ");
    scanf("%f", &valor);

    PRINT(valor);

    valor = valor *3;

    PRINT(valor);
    
     int nro[2], total, x;

    for(x=0; x<2; x++){
        printf("Informe um valor: ");
        scanf("%d", &nro[x]);
    }

    total = SOMAR(nro[0],nro[1]) *10;

    printf("Resultado: %d", total);



    getch();
    return 0;


}