#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

  int x, n[3], maior;

  for(x=0;x<3;x++){
    printf("Informe o numero %d: ", x+1);
    scanf("%d", &n[x]);
  }

  if(n[1]>n[2]&&n[1]>n[3]){
    printf("O %d e o maior\n", n[1]);
  } else if (n[2]>n[1]&&n[2]>n[3]){
    printf("O %d e o maior\n", n[2]);
  }else if (n[3]>n[1]&&n[3]>n[2]){
    printf("O %d e o maior\n", n[3]);
  } 
  if(n[1]<n[2] && n[1]<n[3]){
    printf("O %d e o menor\n", n[11]);
  } else if (n[2]<n[1] && n[2]<n[3]){
    printf("O %d e o menor\n", n[2]);
  }else if (n[3]<n[1] && n[3]<n[2]){
    printf("O %d e o menor\n", n[3]);
  }
  if(n[1]==n[2]){
    printf("O %d e o %d sao iguais\n", n[1], n[2]);
  } else if(n[1]==n[3]){
    printf("O %d e o %d sao iguais\n", n[1], n[3]);
  } else if(n[2]==n[3]){
    printf("O %d e o %d sao iguais\n", n[3], n[2]);
  } 

  getchar();
  return 0;
}
