/******************************************************************************
Faça um programa que leia um vetor de 10 posições. Verifique se existem
valores iguais e os escreva na tela.
*******************************************************************************/
#include <stdio.h>
#define TAM 10

int prenche_vetor(int []);
int compara_vetor(int []);
int main() {
    int vetor[TAM] = {5, 3, 1, 4, 2, 5, 2, 5, 7, 6};
    
    // prenche_vetor(vetor);
    compara_vetor(vetor);

    return 0;
}

int prenche_vetor(int v[]) {
    printf("Digite %d inteiros:\n", TAM);
    for (int i=0; i<TAM; i++) {
        printf("> ");
        scanf("%d", &v[i]);
    }
    return 1;
}

int compara_vetor(int v[]) {
    
    for (int i=0; i<TAM; i++) {
        for (int j=i+1; j<TAM; j++) {
            if (v[i] == v[j]) {
                printf("%d ", v[i]);
                break;
            }
        }
    }
    return 1;
}

