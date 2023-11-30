#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

  int x;
  float nota[4], media;

  for (x=0; x<4; x++){
    printf("Informe sua nota %d: ",x+1);
    scanf("%f", &nota[x]);
    media=media+nota[x];
  }
  
  printf ("Sua media foi: %.2f", media/4);

  getchar();
  return 0;
}