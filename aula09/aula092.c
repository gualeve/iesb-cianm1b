/******************************************************************************
Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).
*******************************************************************************/
#include <stdio.h>
#define LIN 4
#define COL 4

int main()
{
    int matriz[LIN][COL] = {
        {5,  7,  9, 2},
        {4,  5,  3, 1},
        {8, 16, 14, 0},
        {2,  7,  3, 8}
    };
    int linha = 0, coluna = 0;
    
    for (int i=0; i<LIN; i++)
        for (int j=0; j<COL; j++)
            if (matriz[i][j] > matriz[linha][coluna]) {
                linha = i;
                coluna = j;
            }
    printf("O maior valor é %d na linha %d coluna %d\n", matriz[linha][coluna], linha, coluna);
    
    return 0;
}
