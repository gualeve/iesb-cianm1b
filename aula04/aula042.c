/******************************************************************************

Faça um algoritmo que leia um número positivo e imprima seus divisores.
Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    printf(">>> ");
    scanf("%d", &numero);
    
    for(int i=1; i<=numero/2; i++) {
        if (numero % i == 0)
            printf("%d ", i);
        
    }
    printf("%d", numero);
    

    return 0;
}
