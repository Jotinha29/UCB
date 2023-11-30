#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    int x,tabela[4][4] = {42,32,83,95,26,14,37,42,40,43,65,77,74,79,48,55};
    float multi = 1;

    for(x=0;x<4;x++){    
        multi = multi * (tabela[x][1]);
    }

    printf("Multiplicação da coluna 1: %.2f", multi);

getchar();
return 0;
}