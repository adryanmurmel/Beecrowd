/*Calcule o consumo médio de um automóvel
sendo fornecidos a distância total percorrida (em Km)
e o total de combustível gasto (em litros).*/

#include <stdio.h>
#include <math.h>

int main()
{
  int x;
  float y; 
  float c;

  printf("Insira quantos km percorreu e quantos litros gastou: ");
  scanf("%d %f", &x, &y);

  c = x / y;

  printf("%.3lf km/l\n", c);
  return 0;
}