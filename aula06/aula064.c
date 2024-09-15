/******************************************************************************

Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída 
um triângulo lateral formado por asteriscos conforme o exemplo a seguir, 
em que usamos n = 4:
*
**
***
****
***
**
*


*******************************************************************************/
#include <stdio.h>

int triangulo(int);
int tri(int);

int main()
{
    int n;
    
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n == -1)
            break;
        triangulo(n);
        tri(n);
    }
    return 0;
}

int triangulo(int n) {
    int j;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++)
            putchar('*');
        putchar('\n');
    }
    for (int i = n; i > 0; i--) {
        for (int j = 1; j < i; j++)
            putchar('*');
        putchar('\n');
    }
    
    return 1;
}

int tri(int n) {
    int i = 1;
    int c = 1;
    do {
        for (int j=0; j<i; j++)
            putchar('*');
        putchar('\n');
        i += c;
        if (i == n)
            c = -1;
    } while (i > 0);
    return 1;
}
