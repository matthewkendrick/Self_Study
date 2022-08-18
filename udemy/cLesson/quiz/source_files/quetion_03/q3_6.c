#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int st_value = 8;
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 16 + 1;

  printf("--------------------\n");
  if (n >= st_value) {
    printf("数値：%d\n", n);
    printf("\n基準値(%d)以上の数値が\n出力されました。\n", st_value);
  }  else {
    printf("数値：%d\n", n);
  }
  printf("--------------------\n");
}