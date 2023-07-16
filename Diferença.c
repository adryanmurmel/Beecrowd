/*Leia quatro valores inteiros A, B, C e D.
A seguir, calcule e mostre a diferença do produto de A e B
pelo produto de C e D
segundo a fórmula: DIFERENCA = (A * B - C * D).*/
// Exercicio 1007

#include <stdio.h> 

int main()
{

  int A, B, C, D, result;

  printf("Informe o valor de A: ");
  scanf("%d", &A);
  printf("Informe o valor de B: ");
  scanf("%d", &B);
  printf("Informe o valor de C: ");
  scanf("%d", &C);
  printf("Informe o valor de D: ");
  scanf("%d", &D);

  result = (A * B - C * D);

  printf("DIFERENCA = %d", result);

  return 0;
}