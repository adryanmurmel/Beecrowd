/*Faça um programa que mostre os números pares entre 1 e 100.*/

#include <stdio.h>

int main()
{
  int cont = 0;

  while (cont < 100) 
  {
    cont = cont + 2;
    if (cont % 2 == 0)
      printf("%d\n", cont);
  }

  return 0;
}