/*Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:
1 x N = N      2 x N = 2N ... 10 x N = 10N*/

#include <stdio.h>

int main()
{
  int A, i;

  printf("Insira um numero inteiro ate mil: ");
  scanf("%d", &A);

  if (A <= 1000)
  {
    for (i = 1; i <= 10; i++)
    {
      printf("%d x %d = %d\n", i, A, (i * A));
    }
  }
  else
    printf("Numero invalido!");

  return 0;
}