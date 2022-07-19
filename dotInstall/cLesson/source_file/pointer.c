#include <stdio.h>

void f(long *pc) {
  *pc += 100;
  printf("%ld\n", *pc);
}

int main(void) {
  int a = 10;
  int b = 20;

  int *pa;
  pa = &a;

  int *pb;
  pb = &b;

  printf("%d\n", *pa);
  printf("%d\n", *pb);

  printf("----------\n");

  long c = 1000;
  f(&c);

  return 0;
}