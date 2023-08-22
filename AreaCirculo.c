/*Entrada
A entrada contém um valor de ponto flutuante (dupla precisão),
no caso, a variável raio. 
 
Saída
Apresentar a mensagem "AREA=" seguido pelo valor da variável area, 
conforme exemplo abaixo, com 4 casas após o ponto decimal.
Utilize variáveis de dupla precisão (double).*/
  
#include <stdio.h>

int main(void)
{
  double raio, pi = 3.14159, area;

  printf("Insira o raio do circulo = ");
  scanf("%lf", &raio);

  area = pi * raio * raio;

  printf("AREA=%.4lf\n", area);

  return 0;
}
