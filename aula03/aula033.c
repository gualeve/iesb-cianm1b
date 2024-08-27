#include <stdio.h>

int main(void) {
  int i = -1, j = -1;
  for (int i = 0, j = 5; i <= j; i++, j--) {
    printf("(%d, %d)\n", i, j);
  }
  printf("i=%d, j=%d\n", i, j);
  return 0;
}
