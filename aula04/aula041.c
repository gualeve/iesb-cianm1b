/******************************************************************************

Elabore um programa que faça a leitura de vários números inteiros até que se 
digite um número negativo. O programa deve imprimir no final o maior e o menor 
número lido (excetuando o número negativo lido).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int menor, maior = -1;
    while (1) {
        printf(">>> ");
        scanf("%d", &numero);
        if (numero < 0)
            break;
        if (maior == -1) {
            maior = numero;
            menor = numero;
        }
        else {
            if (numero > maior)
                maior = numero;
            if (numero < menor)
                menor = numero;
        }
    }
    if (maior == -1) {
        printf("Nenhum valor válido digitado\n");
    } else {
        printf("O maior valor é %d\n", maior);
        printf("O menor valor é %d\n", menor);
    }
    return 0;
}