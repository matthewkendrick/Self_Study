#include <stdio.h>

int main(void) {
  int a = 10;

  int *pa;
  pa = &a;

  printf("%d\n", *pa);

  return 0;
}