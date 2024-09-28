/******************************************************************************

Crie um programa que leia 6 valores pelo teclado e em seguida imprima-os na
tela em ordem inversa.

*******************************************************************************/
#include <stdio.h>
#define TAM 6

void imprime_invertido(int *v);

int main() {
    int vetor[TAM];
    printf("Digite %d valores inteiros:\n", TAM);
    for (int i=0; i<TAM; i++) {
        printf("> ");
        scanf("%d", &vetor[i]);
    }
    // imprime_invertido(&vetor[0]);
    imprime_invertido(vetor);
    return 0;
}

void imprime_invertido(int *v) {
    for (int i=TAM-1; i>=0; i--)
        printf("%d ", v[i]);
    printf("\n"); 
}


