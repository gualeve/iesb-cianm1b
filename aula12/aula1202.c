/******************************************************************************
Elabore uma função que receba duas strings como parâmetros e verifique se a
segunda string ocorre dentro da primeira. Use aritmética de ponteiros para
acessar os caracteres das strings (NÃO use a função da biblioteca C strstr).
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define TAM 50

int esta_em(char [], char []);

int main()
{
    char nome1[TAM];
    char nome2[TAM];
    
    fgets(nome1, TAM, stdin);
    fgets(nome2, TAM, stdin);
    nome1[strlen(nome1)-1] = '\0';
    nome2[strlen(nome2)-1] = '\0';
    
    if (esta_em(nome1, nome2))
        printf("\"%s\" está contida na string \"%s\"\n", nome2, nome1);
    else
        printf("\"%s\" não está contida na string \"%s\"\n", nome2, nome1);
    
    return 0;
}

int esta_em(char str1[], char str2[]) {
    int diferenca = strlen(str1) - strlen(str2);
    char *p1 = str1;
    char *p2;
    
    if (diferenca < 0)
        return 0;
    for (int i=0; i<=diferenca; i++) {
        p1 = p1 + i;
        p2 = str2;
        do {
            if (*p1 != *p2) {
                break;
            }
            p1++;
            p2++;
        } while (*p2 != '\0');
        if (*p2 == '\0')
            return 1;
        p1 = str1;
    }
    return 0;
}
