#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

long fatorial(int n){
    
    if (n==0){
        return 1;
    } else {
        return(fatorial(n-1)*n);
    }

}

int main(){

    int n = 1;
    while (n){
        printf("\nDigite um numero: ");
        scanf("%d", &n);
        printf("Fatorial: %ld", fatorial(n));
    }
    

    getchar();
    return 0;
}