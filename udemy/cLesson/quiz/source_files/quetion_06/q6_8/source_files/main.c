#include "../header_files/calc.h"

int main(void) {
  printf("==============================\n");
  printf("数値を入力してください\n→ ");
  scanf("%d", &num);

  ab_num = get_absolute(num);

  printf("\n");
  printf("絶対値：%d\n", ab_num);
  printf("==============================\n");
}