#include <stdio.h>

void max(int, int, int);

int main(void) {
  int a, b;
  int result;

  printf("==============================\n");
  printf("1つ目の値を入力してください → ");
  scanf("%d", &a);
  printf("2つ目の値を入力してください → ");
  scanf("%d", &b);
  printf("\n");
  max(a, b, result);
  printf("\n==============================\n");
}

void max(int a, int b, int result) {
  char str1[] = "入力された";
  char str2[] = "大きい値は";

  if (a > b) {
    result = a;
  } else {
    result = b;
  }
  printf("%s %d と %d のうち、\n%s %d です。", str1, a, b, str2, result);
}