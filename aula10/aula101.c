/******************************************************************************

Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na
tela.

*******************************************************************************/
#include <stdio.h>
#define LIN 5
#define COL 5

int main() {
    int matriz[LIN][COL];
    for (int i=0; i<LIN; i++) {
        for (int j=0; j<LIN; j++) {
            matriz[i][j] = (i == j) ? 1 : 0;
            // matriz[i][j] = (i+j == 4) ? 1 : 0;
        }
    }
    for (int i=0; i<LIN; i++) {
        for (int j=0; j<LIN; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}