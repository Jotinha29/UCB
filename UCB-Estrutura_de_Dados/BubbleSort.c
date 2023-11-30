#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

    int i, n, aux, vetor[5];
    
    for ( i = 0; i <= 4; i++){
        printf("Informe sua idade[%d]: ",i+1);
        scanf ("%d", &vetor[i]);
        if(vetor[i]>100){
            system("pause");
        }
    }
    
    for ( n = 1; n <= 5; n++){
        for( i = 0; i <= 3; i++){
            if(vetor[i]>vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
    
    printf("\n+------------------------------------------------------+");
    printf("\nOrdem Descrecente\n");

    for  ( i = 0; i <= 4; i++){
        printf("idade[%d]: %d\n", i+1, vetor[i]);
    }

    for ( n = 1; n <= 5; n++){
        for( i = 0; i <= 3; i++){
            if(vetor[i]>vetor[i-1]){
                aux = vetor[i];
                vetor[i] = vetor[i-1];
                vetor[i-1] = aux;
            }
        }
    }
    
    printf("\n+------------------------------------------------------+");
    printf("\nOrdem Descrecente\n");

    for  ( i = 0; i <= 4; i++){
        printf("idade[%d]: %d\n", i+1, vetor[i]);
    }
    

getchar();
return 0;
}