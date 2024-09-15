/******************************************************************************

 Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
 representará a operação que se deseja efetuar com os números. Assim, se o símbolo 
 for “ + ”, deverá ser realizada uma adição, se for “ − ”, uma subtração, se for “/”,
 uma divisão, e, se for “*”, será efetuada uma multiplicação. 
 Retorne o resultado da operação.

*******************************************************************************/
#include <stdio.h>

float calcula(float, float, char);

int main()
{
    float num1, num2;
    char operacao;
    
    while (1) {
        printf("Digite a operacao: ");
        // scanf("%c", &operacao);
        operacao = getchar();
        if (operacao == '0')
            break;
        printf("Digite um número: ");
        scanf("%f", &num1);
        printf("Digite um número: ");
        scanf("%f", &num2);
        getchar();
        printf("%f %c %f = %f\n", num1, operacao, num2, calcula(num1, num2, operacao));
    }
    return 0;
}
float calcula(float num1, float num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
    }
}
