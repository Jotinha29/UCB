#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){

  float salario, emprestimo, p;

  printf("Informe seu salario: ");
  scanf ("%f", &salario);
  printf("Informe o valor da prestacao do emprestimo: ");
  scanf ("%f", &emprestimo);

  if(emprestimo<(salario*0.2)){
    printf("EMPRESTIMO APROVADO");
  } else {
    printf("EMPRESTIMO REPROVADO");
  }

  getchar();
  return 0;
}