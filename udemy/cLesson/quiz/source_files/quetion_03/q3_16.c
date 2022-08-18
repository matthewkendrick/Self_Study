#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int n = rand() % 100 + 1;
  int num1 = 2;
  int num2 = 3;
  char text[] = "の倍数です。";

  printf("\n==============================\n");
  printf("%d\n", n);
  if (n % (num1 * num2) == 0) {
    printf("%dと%dの公倍数です。", num1, num2);
  } else if (n % num1 == 0) {
    printf("%d%s", num1, text);
  } else if (n % num2 == 0) {
    printf("%d%s", num2, text);
  }
  printf("\n==============================\n");
}