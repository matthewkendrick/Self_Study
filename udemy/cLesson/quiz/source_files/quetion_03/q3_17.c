#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int n = rand() % 100 + 1;
  int num = 50;

  printf("\n==============================\n");
  printf("%d\n", n);
  if (n % 2 == 0 && n < num) {
    printf("%d以下の偶数です。", num);
  } else if (n % 2 == 0) {
    printf("偶数です。");
  } else if (n < 50) {
    printf("%d以下です。", num);
  }
  printf("\n==============================\n");
}