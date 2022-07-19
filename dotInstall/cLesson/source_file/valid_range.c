#include <stdio.h>

int b = 1; //グローバル変数の定義は可能だが、推奨はされない

void f(void) {
  int a = 0; //ローカル変数

  a++;
  b--;

  printf("a: %d\n", a);
  printf("b: %d\n", b);
}

int main(void) {
  f();

  b += 2;
  printf("b: %d\n", b);

  return 0;
}
