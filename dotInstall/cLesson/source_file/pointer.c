#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 20;

  int *pa;
  pa = &a;

  int *pb;
  pb = &b;

  printf("%d\n", *pa);
  printf("%d\n", *pb);

  return 0;
}