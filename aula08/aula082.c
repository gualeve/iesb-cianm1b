/******************************************************************************
Faça um programa que leia um vetor de oito posições. Em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu
programa deverá exibir a soma dos valores encontrados nas respectivas posições X e
Y.

*******************************************************************************/
#include <stdio.h>
#define TAM 8

int ler_valor(int limite);

int main() {
    int vetor[TAM] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x, y;
    // printf("Digite os valores do vetor:\n");
    // for (int i=0; i<TAM; i++) {
    //     printf("> ");
    //     scanf("%d", &vetor[i]);
    // }
    printf("Valor de X\n");
    x = ler_valor(TAM-1);
    printf("Valor de Y\n");
    y = ler_valor(TAM-1);
    printf("%d + %d = %d\n", vetor[x], vetor[y], vetor[x]+vetor[y]);
    
    return 0;
}

int ler_valor(int limite) {
    int valor;
    do {
        printf("Digite um valor entre 0 e %d : ", limite);
        scanf("%d", &valor);
    } while (valor < 0 || valor > limite);
    
    return valor;
}
