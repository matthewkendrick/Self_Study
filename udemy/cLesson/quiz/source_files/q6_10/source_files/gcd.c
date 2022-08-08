#include "../header_files/gcd.h"
#include <stdio.h>

void gcd(int n1, int n2) {
  int c;

  if (n1 < n2) {
    c = n1;
    n1 = n2;
    n2 = c;
  }

  c = n1 % n2;
  while (c != 0) {
    n1 = n2;
    n2 = c;
    c = n1 % n2;
  }

  printf("2つの数の最小公倍数は、%d です。", n2);
}