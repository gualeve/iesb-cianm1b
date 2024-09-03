/******************************************************************************

Escreva um programa que leia o valor de N e calcule a somatória S dada pela
seguinte fórmula:
S = 1/1 + 3/2 + 5/3 + ... + (2N-1)/N

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n;
	float soma = 0;
	printf(">>> ");
	scanf("%d", &n);

	for(int i=1; i<=n; i++) {
		soma += (2.0 * i - 1)/i;
	}
	printf("%.2f", soma);
}
