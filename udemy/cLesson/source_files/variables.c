#include <stdio.h>

int main(void) {
  int a;
  int b = 3;
  int add, sub;
  double avg;
  a = 10;
  add = a + b;
  sub = a - b;
  avg = (a + b) / 2.0;

  printf("%d + %d = %d\n", a, b, add);
  printf("%d - %d = %d\n", a, b, sub);
  printf("%dと%dの平均値: %f\n", a, b, avg);

  return 0;
}