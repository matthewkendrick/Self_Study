#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int a, b;
  int st_value = 9;

  printf("\n==============================\n");
  for (a = 1; a < st_value + 1; a++) {
    for (b = 1; b < st_value + 1; b++) {
      printf("%d*%d=%d ", a, b, a * b);
    }
    if (st_value % 9 == 0) {
      printf("\n");
    }
  }
  printf("\n==============================\n");
}