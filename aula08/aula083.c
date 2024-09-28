/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tam;
    putchar('>');
    scanf("%d", &tam);
    int vetor[tam]; // ISSO É ERRADO!!!! NÃO FAÇAM!!!!
    for (int i=0; i<tam; i++)
        vetor[i] = i;
    
    for (int i=0; i<tam; i++)
        printf("%d ", vetor[i]);

    return 0;
}
