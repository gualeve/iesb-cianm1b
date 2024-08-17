#include <stdio.h>

int main(void) {
  int n1 = 10;
  int n2 = 3;
  float res;
  res = n1 / 3.0;
  printf("n1 / n2 = %f\n", res);
  printf("n1 %% n2 = %d\n", n1 % n2);
  // n1 = n1 + 1; <---> n1++
  // n2 = n1 + 1;
  // n2 = n1++;
  n2 = ++n1;
  printf("n1 = %d\n", n1);
  printf("n2 = %d\n", n2);

}
