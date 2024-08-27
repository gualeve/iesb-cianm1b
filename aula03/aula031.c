#include <stdio.h>

/*
1 - Escreva um programa que leia um valor inteiro pelo teclado e imprima a mensagem:
Valor lido: n
onde n é o valor lido pelo programa.
2 - Faça um programa que leia um valor float pelo teclado e depois o imprima usando o formato “%f”, veja o que aconteceu.
3 - Faça um programa que solicite a entrada do dia/mês/ano e a hora:minutos,
depois imprima o resultado na seguinte formatação:
Data: DD/MM/AA
Hora: HH:mm
4 - Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para isso.
5 - Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que
eles foram lidos.
*/

int main(void) {
  // questão 4
  char a, b, c;
  a = getchar();
  getchar();
  b = getchar();
  getchar();
  c = getchar();


  printf("a:%c\nb:%c\nc:%c\n", c, b, a);
  return 0;
}

/*
int main(void) {
  // questao 3
  int dia, mes, ano;
  int hora, min;

  printf("Digite uma data no formato DD/MM/AA: ");
  scanf("%d/%d/%d", &dia, &mes, &ano);

  printf("%02d/%02d/%02d\n", dia, mes, ano);

  return 0;
}

int main(void) {
  // Questão 2
  float numero;

  printf("Digite um valor: ");
  scanf("%f", &numero);
  
  printf("O valor digitado foi: %.2f\n", numero);
  return 0;
}
*/
