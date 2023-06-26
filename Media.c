/*Faça um programa que leia o nome de um vendedor,
o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas,
informar o total a receber no final do mês, com duas casas decimais.*/

#include <stdio.h>

int main() 
{
  char nome;
  float salarioFixo, vendasMes, totalAumento, salarioTotal, percentual;

  printf("Informe o nome do vendedor: ");
  scanf("%c", &nome);

  printf("Informe o salario fixo: ");
  scanf("%f", &salarioFixo);

  printf("Informe o total de vendas no mes: ");
  scanf("%f", &vendasMes);

  printf("Informe o percentual da comissao: ");
  scanf("%f", &percentual);

  totalAumento = vendasMes * percentual / 100;
  salarioTotal = salarioFixo + totalAumento;

  printf("TOTAL = R$%.2f\n", salarioTotal);

  return 0;
}