#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    int tam1, tam2, cres1, cres2, anos, sair=1;

    do{ 
        printf("PESSOA 1\n");
        printf("Informe sua altura atual em cm............:");
        scanf ("%d", &tam1);
        printf("Informe sua taxa de crescimento anual em cm:");
        scanf ("%d", &cres1);
        printf("PESSOA 2\n");
        printf("Informe sua altura atual em cm............:");
        scanf ("%d", &tam2);
        printf("Informe sua taxa de crescimento anual em cm:");
        scanf ("%d", &cres2);

        while(tam1<=tam2 && anos<=100 && tam1 > 0 && tam2 > 0){
            tam1 += cres1;
            tam2 += cres2;
            anos++;
        }

        if(anos <= 100) {
            printf("%d anos para que a pessoa da altura:%dcm, seja maior que a pessoa altura da: %dcm.\n", anos, (tam1 < tam2 ? tam1 : tam2), (tam1 > tam2 ? tam1 : tam2));
        } else {
            printf("IMPOSSIVEL a pessoa mais baixa nao passara a mais alta nem em 100 anos.\n");
        }

        printf("1-NAO\n0-SIM\n");
        printf("Deseja sair: ");
        scanf("%d", &sair);
    }while(sair!=0);

getchar();
return 0;
}