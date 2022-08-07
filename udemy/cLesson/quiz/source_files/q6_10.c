#include <stdio.h>

void gcd(int, int);
int lcm(int, int);

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

int lcm(int n1, int n2) {
  int c, tmp;

  c = n1 * n2;
  if (n1 < n2) {
    tmp = n1;
    n1 = n2;
    n2 = tmp;
  }

  tmp = n1 % n2;
  while (tmp != 0) {
    n1 = n2;
    n2 = tmp;
    tmp = n1 % n2;
  }
  
  return c / n2;
}