#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    char aux, vetor[26];
    int i, n;
    
    for ( i = 0; i <= 10; i++){
        printf("Informe uma letra[%d]: ",i+1);
        scanf ("%c", &vetor[i]);
    }
    
    for ( n = 1; n <= 12; n++){
        for( i = 0; i <= 11; i++){
            if(vetor[i]>vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
    
    printf("\n+------------------------------------------------------+");
    printf("\nOrdem Descrecente\n");

    for  ( i = 0; i <= 15; i++){
        printf("idade[%d]: %c\n", i+1, vetor[i]);
    }

    for ( n = 1; n <= 12; n++){
        for( i = 0; i <= 11; i++){
            if(vetor[i]>vetor[i-1]){
                aux = vetor[i];
                vetor[i] = vetor[i-1];
                vetor[i-1] = aux;
            }
        }
    }
    
    printf("\n+------------------------------------------------------+");
    printf("\nOrdem Descrecente\n");

    for  ( i = 0; i <= 15; i++){
        printf("idade[%d]: %c\n", i+1, vetor[i]);
    }
    

getchar();
return 0;
}