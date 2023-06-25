/*Faça um programa que leia três valores e apresente o maior dos três valores lidos
seguido da mensagem “eh o maior”.
Obs: a fórmula apenas calcula o maior entre os dois primeiros (a e b).
Um segundo passo, portanto é necessário para chegar no resultado esperado.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int maiorAB(int A, int B, int C);
int maiorAB(int A, int B, int C)
{
  int maxAB, max;
  maxAB = (A + B + abs(A - B)) / 2;
  max = (maxAB + C + abs(maxAB - C)) / 2;

  return max;
}

int main()
{
  int A, B, C;

  printf("Insira 3 valores: ");
  scanf("%d %d %d", &A, &B, &C);

  printf("%d eh o maior\n", maiorAB(A, B, C));

  return 0;
}