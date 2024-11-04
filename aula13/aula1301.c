/******************************************************************************
Escreva uma função que receba como parâmetro uma matriz A contendo N
linhas e N colunas, e um vetor B de tamanho N. A função deve retornar o ponteiro
para um vetor C de tamanho N alocado dinamicamente, em que C é o produto da
matriz A pelo vetor B.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int *multiplica(int **a, int *b, int n);
int **criar_matriz(int n);
int *criar_vetor(int n);
int preenche_matriz(int **a, int n);
int preenche_vetor(int *b, int n);
int imprime_vetor(int *v, int n);

int main()
{
    int **a;
    int *b;
    int *c;
    int n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    a = criar_matriz(n);
    b = criar_vetor(n);
    preenche_matriz(a, n);
    preenche_vetor(b, n);
    c = multiplica(a, b, n);
    imprime_vetor(c, n);
    return 0;
}


int *criar_vetor(int n) {
    return (int *)malloc(sizeof(int) * n);
}

int **criar_matriz(int n) {
    int **m;
    m = (int **)malloc(sizeof(int *) * n);
    for (int i=0; i<n; i++)
        m[i] = (int *)malloc(sizeof(int) * n);
    
    return m;
}

int preenche_matriz(int **m, int n) {
    printf("Digite os valores da matriz:\n");
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    
    return 1;
}

int imprime_vetor(int *v, int n) {
    for (int i=0; i<n; i++) {
        printf("[%d] = %d ", i, v[i]);
    }
    printf("\n");
    return 1;
}

int preenche_vetor(int *v, int n) {
    printf("Digite os valores do vetor:\n");
    for (int i=0; i<n; i++) {
            printf("[%d]: ", i);
            scanf("%d", &v[i]);
        }
    return 1;
}

int *multiplica(int **a, int *b, int n) {
    int *resultado;
    resultado = criar_vetor(n);
    for (int i=0; i<n; i++) {
        resultado[i] = 0;
        for (int j=0; j<n; j++)
            resultado[i] += a[i][j] * b[j];
    }
    return resultado;
}







