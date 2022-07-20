#include <stdio.h>

void swap(int *pa, int *pb) {
}

int main() {
  int a;
  int b;
  swap(&a, &b);
  printf("a: %d, b: %d\n", a, b);

  return 0;
}