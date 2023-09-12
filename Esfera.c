/*Faça um programa que calcule e mostre o volume de uma esfera
sendo fornecido o valor de seu raio (R).
A fórmula para calcular o volume é: (4/3) * pi * R3.
Considere (atribua) para pi o valor 3.14159.*/

#include <stdio.h> 
 
int main()
{
  double raio, volume, pi = 3.14159;

  printf("Insira o raio da esfera: ");
  scanf("%lf", &raio);

  printf("VOLUME = %.3lf", (4 / 3.0) * pi * raio * raio * raio);

  return 0;
}