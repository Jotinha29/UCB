#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define MAX 4 

void insertion_sort(int *a){
    int i, j, tmp;

    for (i = 0; i < MAX; i++){
        tmp = a[i];
        for(j = i-1; j>= 0 && tmp < a[j]; j--){
            a[j+1] = a[j];
        }
        a[j+1] = tmp;
    }
    
}

int main(){

    int i, vet[MAX];
    // Lê MAX ou 4 valores 
    for(i = 0; i < MAX; i++){
        printf("Digite um valor: ");
        scanf ("%d", &vet[i]);
    }
    //Ordena os valores 
    insertion_sort(vet);

    printf("\nValores ordenados:\n");
    for (i = 0; i < MAX; i++){
        printf("\t%d - %d\n",i+1, vet[i]);
    }
    

getchar();
return 0;
}