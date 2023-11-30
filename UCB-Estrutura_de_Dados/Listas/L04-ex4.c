#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    int x,tabela[4][4] = {42,32,83,95,26,14,37,42,40,43,65,77,74,79,48,55};
    float soma1 = 0, soma2 = 0;

    for(x=0;x<4;x++){    
        soma1 += tabela[1][x];
        soma2 += tabela[3][x];
    }

    printf("Soma da linha 1: %.2f\n", soma1);
    printf("Soma da linha 3: %.2f\n", soma2);

    if(soma1>soma2){
        printf("Maior soma: %.2f", soma1);
    } else {
        printf("Maior soma: %.2f", soma2);
    }

getchar();
return 0;
}