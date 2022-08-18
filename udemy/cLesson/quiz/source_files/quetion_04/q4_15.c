#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int n, i;
  int st_value = 100;

  printf("\n==============================\n");
  for (i = 1; i < st_value + 1; i++) {
    printf("%d ", i);
    if (i % 10 == 0) {
      printf("\n");
    }
  }
  printf("\n==============================\n");
}