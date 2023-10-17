#include <stdio.h>

int maior(int A, int B);

int maior(int A, int B)
{
  if (A > B) 
    return A;
  else
    return B;
}

int main()
{
  int num1, num2;

  printf("Insira dois valores: \n");
  scanf("%d %d", &num1, &num2);

  printf("O maior valor eh: %d", maior(num1, num2));

  return 0;
}
