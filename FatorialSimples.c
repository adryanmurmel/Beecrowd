#include <stdio.h> 

int main()
{
  int n, fatorial = 1, i;

  scanf("%d", &n);
  for (i = n; i >= 1; i--)
  {
    fatorial = fatorial * i;
  }
  printf("%d\n", fatorial);

  return 0;
}