/******************************************************************************

Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string lida está contida dentro da primeira.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define TAM 50

int main()
{
    char nome[TAM];
    // char nome1[TAM];
    // char nome2[TAM];
    
    // fgets(nome1, TAM, stdin);
    // fgets(nome2, TAM, stdin);
    // nome1[strlen(nome1)-1] = '\0';
    // nome2[strlen(nome2)-1] = '\0';
    
    // if (strstr(nome1, nome2))
    //     printf("\"%s\" está contida na string \"%s\"\n", nome2, nome1);
    // else
    //     printf("\"%s\" não está contida na string \"%s\"\n", nome2, nome1);

    printf("Digite um nome: ");
    fgets(nome, TAM, stdin);
    nome[strlen(nome)-1] = '\0';

    printf("%s\n", nome);
    for (int i=0; i<strlen(nome); i++) {
        if (i == 0 || nome[i-1] == ' ' && nome[i] != ' ')
            putchar(nome[i]);
    }
    return 0;
}
