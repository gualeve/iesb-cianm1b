/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define TAM 20

int main()
{
    char nome[TAM];
    char sobrenome[TAM];
    
    fgets(nome, TAM, stdin);
    fgets(sobrenome, TAM, stdin);
    nome[strlen(nome)-1] = '\0';
    sobrenome[strlen(sobrenome)-1] = '\0';
    
    printf("seu nome completo é: %s %s", nome, sobrenome);
    printf("Tamanho nome: %ld\n", strlen(nome));
    printf("Tamanho sobrenome: %ld\n", strlen(sobrenome));

    return 0;
}
