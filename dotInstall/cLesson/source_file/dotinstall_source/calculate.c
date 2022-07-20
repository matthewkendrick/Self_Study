#include <stdio.h>

int main(void) {
  int x;

  x = 10 % 3;
  printf("%d\n", x);

  x += 3;
  printf("%d\n", x);

  x++;
  printf("%d\n", x);
}