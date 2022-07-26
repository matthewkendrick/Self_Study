#include <stdio.h>

int main(void) {
  int x[] = {1, 2, 3};

  printf("%d + %d = %d\n", x[0], x[0], x[0] + x[0]);
  printf("%d + %d = %d\n", x[1], x[2], x[1] + x[2]);
}