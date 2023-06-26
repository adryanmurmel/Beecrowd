#include <stdio.h>

int main()
{
  char nome[20];
  double salarioFixo;
  double vendasMes;
  double TOTAL = 0;

  printf("Insira o nome do vendedor: ");
  scanf("%s", nome);
 
  printf("\nInsira o salario fixo: ");
  scanf("%lf", &salarioFixo);

  printf("\nInsira as vendas do mes: ");
  scanf("%lf", &vendasMes);

  TOTAL = (salarioFixo + (0.15 * vendasMes));

  printf("TOTAL = R$ %.2f\n", TOTAL);

  return 0;
}