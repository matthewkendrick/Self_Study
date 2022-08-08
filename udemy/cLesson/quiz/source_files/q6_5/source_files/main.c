#include "../header_files/judge.h"

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