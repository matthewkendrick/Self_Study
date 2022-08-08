#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int n = rand() % 100 + 1;

  printf("==============================\n");
  printf("点数： %d\n", n);
  if (n > 80) {
    printf("\n優\n");
  } else if (n < 80 && n >= 70) {
    printf("\n良\n");
  } else if (n < 70 && n >= 60) {
    printf("\n可\n");
  } else if (n < 60) {
    printf("\n不可\n");
  }
  printf("==============================\n");
}