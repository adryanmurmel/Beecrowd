/*Leia dois valores inteiros.
A seguir, calcule o produto entre estes dois valores
e atribua esta operação à variável PROD.
A seguir mostre a variável PROD com mensagem correspondente.*/

#include <stdio.h>

int main()
{

  int v1, v2, PROD;

  printf("Insira o valor 1: ");
  scanf("%d", &v1);

  printf("Insira o valor 2: ");
  scanf("%d", &v2);

  PROD = v1 * v2;

  printf("PROD = %d", PROD);

  return 0;
}