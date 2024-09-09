/******************************************************************************

Escreva uma função que, dado um número real passado como parâmetro,
retorna a parte inteira e a parte fracionária desse número por referência.

*******************************************************************************/
#include <stdio.h>
int separador(float numero, int *inteiro, float *fracao);

int main()
{
    float numero;
    int inteiro;
    float fracao;
    
    printf("Digite um número real: ");
    scanf("%f", &numero);
    if (separador(numero, &inteiro, &fracao)) {
        printf("Parte inteira: %d\n", inteiro);
        printf("Parte fracionária: %f\n", fracao);
    } else
        printf("Erro na separação de números\n");
    
    return 0;
}


int separador(float numero, int *inteiro, float *fracao) {
    *inteiro = (int)numero;
    *fracao = numero - *inteiro;
    return 0;
}
