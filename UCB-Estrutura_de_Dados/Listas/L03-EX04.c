#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    int idade[4], x, media;

    idade[4]=0;

    for(x=0; x<3; x++){
        printf("Informe a idade da pessoa %d: ", x+1);
        scanf("%d", &idade[x]);
        idade[4] = idade[4] + idade[x];
    }

    media = idade[4]/3;

    printf("Media das idades: %d\n", media);

    printf("Idades maiores que 18: \n");

    for(x=0; x<3; x++){
        if(idade[x]>18){
            printf("Idade %d: %d\n", x+1, idade[x]);
        }
    }

getchar();
return 0;
}