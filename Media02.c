/*Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno.
A seguir, calcule a média do aluno,
sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.*/

#include <stdio.h>

int main()
{

  double A, B, C, media;

  printf("Insira a nota 1: ");
  scanf("%.1lf", &A);
  scanf("%lf");

  printf("Insira a nota 2: ");
  scanf("%.1lf", &B);
  scanf("%lf");

  printf("Insira a nota 3: ");
  scanf("%.1lf", &C);
  scanf("%lf");

  media = (A * 2 + B * 3 + C * 5) / 10;

  printf("MEDIA = %.1lf\n", media);

  return 0;
}