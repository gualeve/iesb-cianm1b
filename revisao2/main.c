/******************************************************************************
Faça um programa em C que gere um arquivo binário contendo os dados de uma matriz bidimensional.
Os dois primeiros números do arquivo conterão a dimensão da matriz (linhas/colunas).

Exemplo:
Arquivo: 3 4 5 3 7 9 3 4 6 16 20 42 9 8
Representa a matriz:
5 3 7 9 
3 4 6 16 
20 42 9 8
=================
PARTE 2

Um arquivo binário possui uma matriz de valores inteiros. Os dois primeiros valores 
são as dimensões da matriz (linhas e colunas), enquanto o restante dos números são 
os valores de cada elemento da matriz. Escreva uma função que receba o nome do 
arquivo e retorne o ponteiro para a matriz alocada dinamicamente contendo os valores 
lidos do arquivo
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int **criar_matriz(char *arquivo);
int main()
{
    FILE *fp;
    int valor;
    int linhas, colunas;
    char arquivo[20];
    int **matriz;
    
    srand(time(NULL));
    
    printf("Digite o nome do arquivo: ");
    fgets(arquivo, 20, stdin);
    arquivo[strlen(arquivo)-1] = '\0';
    
    if ((fp = fopen(arquivo, "wb")) == NULL) {
        perror("ERRO");
        exit(1);
    }
    linhas = rand() % 19 + 2; // de 2 a 5 linhas
    colunas = rand() % 4 + 2; // de 2 a 5 colunas
    printf("matriz %d x %d\n", linhas, colunas);
    if (fwrite(&linhas, sizeof(int), 1, fp) != 1) {
        perror("ERRO");
        exit(1);
    }
    if (fwrite(&colunas, sizeof(int), 1, fp) != 1) {
        perror("ERRO");
        exit(1);
    }
    for (int i=0; i<linhas*colunas; i++) {
        valor = rand() % 100;
        if (fwrite(&valor, sizeof(int), 1, fp) != 1) {
            perror("ERRO");
            exit(1);
        }
    }
    fclose(fp);
    
    matriz = criar_matriz(arquivo);
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            printf("%d ",  matriz[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

int **criar_matriz(char *arquivo) {
    FILE *fp;
    int **matriz;
    int linhas, colunas;
    int valor;
    
    if ((fp = fopen(arquivo, "rb")) == NULL) {
        perror("ERRO");
        exit(1);
    }
    fread(&linhas, sizeof(int), 1, fp);
    fread(&colunas, sizeof(int), 1, fp);
    matriz = (int **)malloc(sizeof (int *) * linhas);
    for (int i=0; i<linhas; i++)
        matriz[i] = (int *)malloc(sizeof(int) * colunas);
    for (int i=0; i<linhas; i++)
        for (int j=0; j<colunas; j++) {
            fread(&valor, sizeof(int), 1, fp);
            matriz[i][j] = valor;
        }
    fclose(fp);
    return matriz;
}