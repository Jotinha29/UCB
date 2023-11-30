#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

  int x;
  float nota[4], media, total;

  for (x=0; x<4; x++){
    printf("Informe sua nota %d: ",x+1);
    scanf("%f", &nota[x]);
    total=total+nota[x];
  }
  
  media = total/4;

  printf ("Sua media foi: %.2f\n", media);

  if (media<=3){
    printf("REPROVADO");
  } else if (media>3.1 && media<7){
    printf("RECUPERACAO");
  } else if (media>=7){
    printf("APROVADO");
  }
  getchar();
  return 0;
}