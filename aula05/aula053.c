/******************************************************************************

Elabore uma função que receba três números inteiros como parâmetro,
representando horas, minutos e segundos. A função deve retornar esse horário
convertido em segundos.

*******************************************************************************/
#include <stdio.h>
int segundos(int, int, int);

int main()
{
    int hora, minuto, segundo;
    do {
        printf("Digite a hora: ");
        scanf("%d", &hora);
    } while (hora > 23 || hora < 0);
    do {
        printf("Digite o minuto: ");
        scanf("%d", &minuto);
    } while (minuto > 59 || minuto < 0);
    do {
        printf("Digite o segundo: ");
        scanf("%d", &segundo);
    } while (segundo > 59 || segundo < 0);
    printf("A quantidade de segundos na hora %02d:%02d:%02d é %d segundos\n", hora, minuto, segundo, segundos(hora, minuto, segundo));
    return 0;
}


int segundos(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}