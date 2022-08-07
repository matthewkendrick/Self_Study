#include <stdio.h>
#include "../header_files/calc.h"

char str[] = "数値を入力してください\n";

int main(void) {
  int n1, n2;
  int r1, r2;

  printf("%sn1 = ", str);
  scanf("%d", &n1);
  printf("%sn2 = ", str);
  scanf("%d", &n2);

  r1 = div(n1, n2);
  r2 = mod(n1, n2);
  printf("%d / %d = %d...%d\n", n1, n2, r1, r2);
}