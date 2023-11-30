#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
  int l, h, area, litros;

  printf("Informe em Metros\n");
  printf("Altura da sua parede: ");
  scanf ("%d", &h);
  printf("Largura da sua parede: ");
  scanf ("%d", &l);
  
  area = l*h;
  litros = (300*area)/1000;

  if(litros%2==0){
    printf("%d latas", litros);
  } else {
    printf("%d latas e sobrara 1L", litros+1);
  }

  getchar();
  return 0;
}