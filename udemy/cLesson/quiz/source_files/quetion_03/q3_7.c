#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int st_value = 5;
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 10 + 1;

  printf("--------------------\n");
  printf("出力：%d\n", n);
  if (n >= st_value) {
    printf("\n基準値(%d)以上の数値が\n出力されました。\n", st_value);
  } else {
    printf("\n基準値(%d)未満の数値が\n出力されました。\n", st_value);
  }
  printf("--------------------\n");
}