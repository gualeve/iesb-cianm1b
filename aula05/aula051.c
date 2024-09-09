/******************************************************************************

Escreva uma função que receba por parâmetro dois números inteiros e retorne o
maior deles.

*******************************************************************************/
#include <stdio.h>

int maior_valor(int, int);

int main()
{
    int num1, num2;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    
    printf("O maior valor é: %d\n", maior_valor(num1, num2));

    return 0;
}

int maior_valor(int x, int y) {
    if (x > y)
        return x;
    return y;
}