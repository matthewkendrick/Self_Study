#include <stdio.h>

// プロトタイプ宣言
int max(int, int);
void show(int);
void line();

int main() {
  int n1 = 10, n2 = 5;
  line();
  show(n1);
  show(n2);
  printf("\n2つの数のうち、\n大きい数は %d です。\n", max(n1, n2));
  line();
}

int max(int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

void show(int n) {
  printf("数値: %d\n", n);
  return;
}

void line() {
  printf("--------------------\n");
}