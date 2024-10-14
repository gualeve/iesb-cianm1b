/******************************************************************************
Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na
prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja
pior nota foi na prova 3.

*******************************************************************************/
#include <stdio.h>
#define ALUNOS 4
#define PROVAS 3

int main() {
    float notas[PROVAS][ALUNOS];
    int contador[PROVAS] = {0, 0, 0};
    int menor;

    for (int j=0; j<ALUNOS; j++) {
        printf("Aluno %d:\n", j+1);
        for (int i=0; i<PROVAS; i++) {
            printf("Nota da %da prova: ", i+1);
            scanf("%f", &notas[i][j]);
        }
    }
    for (int i=0; i<PROVAS; i++) {
        for (int j=0; j<ALUNOS; j++) {
            printf("%4.2f ", notas[i][j]);
        }
        printf("\n");
    }
    for (int j=0; j<ALUNOS; j++) {
        menor = 0;
        for (int i=0; i<PROVAS; i++) {
            if (notas[i][j] < notas[menor][j]) {
                menor = i;
            }
        }
        contador[menor]++;
    }
    for (int i=0; i<PROVAS; i++) {
        printf("%d aluno(s) teve/tiveram a pior nota na prova %d\n", contador[i], i+1);
    }
    
    return 0;
}
