#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    float salario=1, mediaSalarial=0, maior=0, percentual;
    int nFilhos, respostas=0, mediaFilhos=0;

    printf("DIGITE SALARIO = 0 PARA SAIR\n");
    

    do{
        printf("Informe seu salario.....:");
        scanf("%f", &salario);
        printf("Informe numero de filhos:");
        scanf("%d", &nFilhos);

        mediaSalarial += salario;
        mediaFilhos += nFilhos;
        respostas++;

        if(salario>maior){
            maior = salario;
        } else if(salario<=100){
            percentual++;
        }
    }while(salario!=0);

    printf("------------------------------------------\n");
    printf("TOTAL DE RESPOSTAS DA PESQUISA......:%d\n", respostas);
    printf("Media Salarial......................:%2.f\n", mediaSalarial/respostas);
    printf("Media de filhos.....................:%d\n", mediaFilhos/respostas);
    printf("Maior salario.......................:%2.f\n", maior);
    printf("Percentual de salarios ate R$1000.00.:%2.f", (percentual/respostas)*100);

getchar();
return 0;
}