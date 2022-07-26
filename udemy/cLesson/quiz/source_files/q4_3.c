#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int n = rand() % 10 + 1;
  int i = 0;

  printf("\n==============================\n");
  printf("数：%d\n", n);
  do {
    printf("■ ");
    i++;
  } while (i < n);
  printf("\n==============================\n");
  return 0;
}