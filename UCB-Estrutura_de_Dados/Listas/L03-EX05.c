#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    int x, soma=0;

    while(soma<30){
        printf("Informe um numero: ");
        scanf("%d", &x);

        soma+=x;

    }

getchar();
return 0;
}