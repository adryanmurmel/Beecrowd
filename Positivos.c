/*Faça um programa que leia 6 valores.
Estes valores serão somente negativos ou positivos (desconsidere os valores nulos).
A seguir, mostre a quantidade de valores positivos digitados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num = 0, num1, num2, num3, num4, num5, num6;

  printf("Insira seis valores positivos ou negativos: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  scanf("%d", &num4);
  scanf("%d", &num5);
  scanf("%d", &num6);

  if (num1 >= 1)
  {
    num++;
  }
  if (num2 >= 1)
  {
    num++;
  }
  if (num3 >= 1)
  {
    num++;
  }
  if (num4 >= 1)
  {
    num++;
  }
  if (num5 >= 1)
  {
    num++;
  }
  if (num6 >= 1)
  {
    num++;
  }
  printf("A quantidade de positivos eh: %d", num);
}