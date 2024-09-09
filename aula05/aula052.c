/******************************************************************************

Escreva uma função que receba um ano (valor inteiro) do calendário gregoriano
e retorne 1 se o ano for bissexto ou 0 se o ano não for bissexto;
Obs.: A regra para definir se o ano é bissexto ou não no calendário gregoriano é:
Se o ano é divisível por 4, o ano é bissexto, mas se o ano for divisível por 100 não é
bissexto a não ser que seja também divisível por 400. Todos os outros anos não são
bissextos;

*******************************************************************************/
#include <stdio.h>
int bissexto(int);

int main()
{
    int ano;
    while (1) {
        printf("Digite um ano: ");
        scanf("%d", &ano);
        if (ano < 0)
            break;
        if (bissexto(ano)) {
            printf("%d é bissexto\n", ano);
        } else {
            printf("%d não é bissexto\n", ano);
        }
    
    }
    return 0;
}

int bissexto(int ano) {
    int div4 = (ano % 4 == 0);
    int div100 = (ano % 100 == 0);
    int div400 = (ano % 400 == 0);
    if (! div4 || div100 && !div400)
        return 0;
    return 1;
}






