#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

  float vetor[5];
  int x;
  
    for(x=0; x<5;x++){
      vetor[x] = x * x + 5;
    }
    for(x=0; x<5;x++){
      printf("Vetor[%d] = %2.1f\n", x+1, vetor[x]);
    }
    getch();
}