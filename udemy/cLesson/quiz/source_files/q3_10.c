#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int lower_value = 10;
  int upper_value = 90;

  srand((unsigned)time(NULL));
  int n = rand() % 100 + 1;

  printf("==============================\n");
  printf("出力：%d\n", n);
  if (n <= lower_value || n >= upper_value) {
    printf("\n基準値a(%d)以下か、\n基準値b(%d)以上の値です。\n", lower_value, upper_value);
  }
  printf("==============================\n");
}