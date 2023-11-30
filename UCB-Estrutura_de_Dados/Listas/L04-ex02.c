#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    int x,y,tabela[4][4] = {42,32,83,95,26,14,37,42,40,43,65,77,74,79,48,55};
    float total = 0;

    for(x=0;x<4;x++){    
        total += tabela[2][x];
    }

    printf("Soma da 2 linha: %.2f", total);

getchar();
return 0;
}