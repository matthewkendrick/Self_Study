#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int st_value = 50;

  // srand((unsigned)time(NULL));
  int n = rand() % 100 + 1;

  printf("==============================\n");
  printf("出力： %d\n", n);
  if (n < st_value) {
    printf("\n基準値(%d)未満です。\n", st_value);
  } else if (n <= st_value) {
    printf("\n基準値(%d)以上です。\n", st_value);
  }
  printf("==============================\n");
}