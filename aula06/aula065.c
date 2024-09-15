/******************************************************************************

Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o 
resultado da seguinte série S:

     2     5     10          (N - 1)^2 + 1     N^2 + 1
S = --- + --- + --- + ... + --------------- + ---------
     4     5     6           (N - 1) + 3       N + 3

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float serie(int);

int main()
{
    int n;
    
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n == -1)
            break;
        
        printf("S = %f\n", serie(n));
    }
    return 0;
}

float serie(int n) {
    float soma = 0;
    
    for (int i = 1; i <= n; i++)
        soma += (pow(i, 2) + 1) / (i + 3);
    return soma;
}
