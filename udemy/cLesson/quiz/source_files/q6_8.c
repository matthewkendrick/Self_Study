#include <stdio.h>

int get_absolute(int);

int main(void) {
  int num, ab_num;

  printf("==============================\n");
  printf("数値を入力してください\n→ ");
  scanf("%d", &num);

  ab_num = get_absolute(num);

  printf("\n");
  printf("絶対値：%d\n", ab_num);
  printf("==============================\n");
}

int get_absolute(int num) {
  if (num <= 0) {
    return num * (- 1);
  } else {
    return num;
  }
}