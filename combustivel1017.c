/*Joaozinho quer calcular e mostrar a quantidade de litros de combust�vel gastos em uma viagem,
ao utilizar um autom�vel que faz 12 KM/L. 
Para isso, ele gostaria que voc� o auxiliasse atrav�s de um simples programa.
Para efetuar o c�lculo, deve-se fornecer o tempo gasto na viagem (em horas)
e a velocidade m�dia durante a mesma (em km/h).
Assim, pode-se obter dist�ncia percorrida e, em seguida,
calcular quantos litros seriam necess�rios. 
Mostre o valor com 3 casas decimais ap�s o ponto.*/

#include<stdio.h>

int main()
{
	int tempgasto, velmedia;
	float distanciap, gasto;
	
	printf("Insira o tempo gasto em horas: ");
	scanf("%d", &tempgasto);
	printf("Insira a velocidade media: ");
	scanf("%d", &velmedia);
	
	distanciap = tempgasto * velmedia;
	gasto = distanciap / 12;
	
	printf("O gasto foi de %.2f", gasto);
}
