#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int st_value = 1;

  srand((unsigned)time(NULL));
  int n = rand() % 10 + 1;

  printf("==============================\n");
  printf("出力： %d\n", n);
  if (n == st_value) {
    printf("\n基準値(%d)が出力されました。\n", st_value);
  } else {
    printf("\n基準値(%d)ではありません。\n", st_value);
  }
  printf("==============================\n");
}