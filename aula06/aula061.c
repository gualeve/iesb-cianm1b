/******************************************************************************

 Escreva uma função que receba um número e retorne o seu fatorial:
	n! = 1 * 2 * 3 * … * (n - 2) * (n - 1) * n.

*******************************************************************************/
#include <stdio.h>

int fatorial(int);

int main()
{
    int numero;
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero < 0)
            break;
        printf("O fatorial de %d é %d\n", numero, fatorial(numero));
    }
    return 0;
}

int fatorial(int n) {
    int fat = 1;
    for (int i = 2; i <= n; i++)
        fat *= i;
    return fat;
}
