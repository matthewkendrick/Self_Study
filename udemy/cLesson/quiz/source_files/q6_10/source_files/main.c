#include "../header_files/gcd.h"
#include "../header_files/lcm.h"
#include <stdio.h>

int main(void) {
  int a, b, result;
  char str1[] = "つ目の値を入力してください\n→ ";

  printf("==============================\n");
  printf("1 %s", str1);
  scanf("%d", &a);
  printf("2 %s", str1);
  scanf("%d", &a);

  printf("\n");
  result = lcm(a, b);
  printf("2つの数の最大公約数は、%d です。", result);
  printf("\n");
  gcd(a, b);

  printf("\n==============================\n");
}