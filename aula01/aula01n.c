#include <stdio.h>

int main(void) {
  int nascimento, ano_atual;
  char c = 'A';
  printf("Digite o ano de seu nasimento e ano atual:\n");
  scanf("%d %d", &nascimento, &ano_atual);
  printf("Minha idade é %d anos\n", ano_atual - nascimento);
  putchar(c);
  putchar('\n');
  putchar('A');
  putchar(65);
  return 0;
}
