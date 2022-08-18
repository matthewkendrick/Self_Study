#include <stdio.h>

int main(void) {
  int a;
  int b;

  printf("aの値を入力してください → ");
  scanf("%d", &a);

  printf("bの値を入力してください → ");
  scanf("%d", &b);

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  printf("a * b = %d\n", a * b);
  printf("a / b = %d\n", a / b);
  printf("a %% b = %d\n", a % b);
}