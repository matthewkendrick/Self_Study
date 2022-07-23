#include <stdio.h>

int global = 1000;

void func1(double, int);
void func2();

int main() {
  double a = 123.41;
  int b = 100;
  global = 20;

  printf("--------------------\n");
  printf("main処理中...\n");
  printf("\nglobal = %d\n", global);
  printf("a = %f\nb = %d\n", a, b);
  printf("--------------------\n");

  func1(3.1, 4);
  func2();
}

void func1(double a, int b) {
  printf("func1処理中...\n");
  printf("\nglobal = %d\n", global);
  printf("a = %f, b = %d\n", a, b);
  printf("--------------------\n");
}

void func2() {
  double a = -4.1;
  int b = 2;

  printf("func2処理中...\n");
  printf("\nglobal = %d\n", global);
  printf("a = %f, b = %d\n", a, b);
  printf("--------------------\n");
}