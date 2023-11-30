#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

  int x, vetor[5];
  //armazenamento de valores na matriz
  for(x=0; x<5; x++){
    printf("Matriz[%d]: ", x+1);
    scanf ("%d", &vetor[x]);
  }
  printf("\n Matriz\n\n");
  //apresentando os valores armazenados
  for(x=0; x<5; x++){
    printf("Posicao %d = %3d\n", x+1, vetor[x]);
  }
  
  return 0;
}