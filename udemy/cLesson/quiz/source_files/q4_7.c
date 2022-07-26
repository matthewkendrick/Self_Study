#include <stdio.h>

int main() {
  int a = 3;

  printf("\n==============================\n");
  for (a = a; a > (a - a) - 1; a--) {
    printf("a = %d\n", a);
  }
  printf("\n==============================\n");
}