/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1,
o valor unitário de cada peça 1, o código de uma peça 2,
o número de peças 2 e o valor unitário de cada peça 2.
Após, calcule e mostre o valor a ser pago.*/

#include <stdio.h>

int main()
{
  int codigo, quantidade, codigo2, quantidade2;
  float preco, preco2;

  printf("Insira o codigo, quantidade e preco da unidade do produto 1: ");
  scanf("%d%d%f", &codigo, &quantidade, &preco);
  setbuf(stdin, NULL);

  printf("Insira o codigo, quantidade e preco da unidade do produto 1: ");
  scanf("%d%d%f", &codigo2, &quantidade2, &preco2);
  setbuf(stdin, NULL);

  printf("VALOR A PAGAR: R$ %.2f\n", (quantidade * preco + quantidade2 * preco2));

  return 0;
}