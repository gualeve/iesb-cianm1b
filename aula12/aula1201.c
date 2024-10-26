/******************************************************************************
Crie um programa que contenha um array com cinco elementos inteiros. Leia
esse array do teclado e imprima o endereço das posições contendo valores
pares. O programa deve manipular o array exclusivamente por aritmética de
ponteiros.

*******************************************************************************/
#include <stdio.h>
#define TAM 5

int main() {
    int vetor[TAM];
    int *p = &vetor[0];
    printf("Digite os valores do vetor:\n");
    for (int i=0; i<TAM; i++) {
        scanf("%d", p);
        p++;
    }
    p = &vetor[0];
    for (int i=0; i<TAM; i++) {
        if (*p % 2 == 0) {
            printf("%p: %d\n", p, *p);
        }
        p++;
    }
    return 0;
}