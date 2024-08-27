#include <stdio.h>

/*
1 - Faça um programa que leia dois números e mostre qual deles é o maior.
2 - Faça um programa que leia dois números e mostre o maior deles. Se, por acaso,
os dois números forem iguais, imprima a mensagem “Números iguais”.
3 - Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.
4 - Faça um programa que receba a altura e o sexo de uma pessoa e calcule e
mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à
altura):
- Homens: (72,7 * h) – 58
- Mulheres: (62,1 * h) – 44,7
5 - Faça um programa que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril.
6 - Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário escolhe
uma das opções, e o seu programa pede dois valores numéricos e realiza a
operação, mostrando o resultado.
7 - Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.
*/

/*
int main(void) {
  // questão 3
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("%d é %spar\n", numero, (numero % 2 == 0) ? "" : "ím");
  
  // if (numero % 2 == 0)
  //   printf("%d é par\n", numero);
  // else
  //   printf("%d é ímpar\n", numero);
  

  return 0;
}

/*
int main(void) {
  // questao 2
  int num1, num2;
  
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite um número: ");
  scanf("%d", &num2);
  if (num1 > num2) {
    printf("%d é o maior\n", num1);
  } else {
    if (num2 > num1) {
      printf("%d é o maior\n", num2);
    } else {
      printf("os números são iguais\n");
    }
  }
  return 0;
}
*/
