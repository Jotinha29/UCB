#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    int x, y;

    printf("Digite um numero: ");
    scanf ("%d", &y);

    for(x=y; x>=0; x--){
        printf("%d ", x);
    }
    

getchar();
return 0;
}