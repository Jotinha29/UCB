#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

  float custo, frete, despesas, venda, lucro, totalCusto;

  printf("Informe o custo da sua mercadoria....: ");
  scanf ("%f", &custo);
  printf("Informe o valor do frete.............: ");
  scanf ("%f", &frete);
  printf("SE NAO HOUVE COLOQUE 0\n");
  printf("Informe o valor de despesas eventuais:");
  scanf ("%f", &despesas);
  printf("Informe o valor de venda.............:");
  scanf ("%f", &venda);
  
  totalCusto= custo+frete+despesas;
  lucro = (totalCusto/venda) * 100;

  printf("PERCENTUAL LUCRO: %.1f%%", lucro);

  getchar();
  return 0;
}