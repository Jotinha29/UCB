#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "");

  int ddd;
  printf("Informe seu DDD: ");
  scanf("%d", &ddd);

  switch (ddd){
    case 61:
      printf("Voce e de Brasilia");
    break;
    case 71:
      printf("Voce é de Salvador");
    break;
    case 11:
      printf("Voce é de SP");
    break;
    case 21:
      printf("Voce é de RJ");
    break;
    case 32:
      printf("Voce é de Juiz de fora");
    break;
    case 19:
      printf("Voce é de Campinas");
    break;
    case 27:
      printf("Voce é de Vitoria");
    break;
    case 31:
      printf("Voce é de BH");
    break;
    default:
      printf("DDD não encontrado");
  }

  getchar();
  return 0;
}