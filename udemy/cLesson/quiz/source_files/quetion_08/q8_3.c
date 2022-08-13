#include <stdio.h>

int main(void) {
  int num, i;
  int result = 1;

  printf("==============================\n");
  printf("数値を入力してください\n→ ");
  scanf("%d", &num);
  printf("\n");
  for (i = 1; i <= num; i++) {
    result = result * i;
  }
  printf("%dの階乗は、%dです。\n", num, result);
  printf("==============================\n");

  return 0;
}