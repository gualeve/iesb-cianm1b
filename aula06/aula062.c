/******************************************************************************

Elabore uma função para verificar se um número é um quadrado perfeito.
Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como 
o quadrado de outro número inteiro. Exemplos: 1, 4, 9 são quadrados perfeitos, 
enquanto 3, 5 e 10 não são.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int quadrado_perfeito(int);

int main()
{
    int numero;
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero < 0)
            break;
        if (quadrado_perfeito(numero))
            printf("%d é um quadrado perfeito\n", numero);
        else
            printf("%d não é um quadrado perfeito\n", numero);
    }
    return 0;
}
int quadrado_perfeito(int n) {
    float raiz = sqrt(n);

    if (raiz == (float)(int)raiz)
        return 1;
    return 0;
}
