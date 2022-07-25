#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int lower_value = 20;
  int upper_value = 80;

  srand((unsigned)time(NULL));
  int n = rand() % 100 + 1;

  printf("==============================\n");
  printf("出力：%d\n", n);
  if (n >= 20 && n < 80) {
    printf("\n基準値a(%d)以上、\n基準値b(%d)未満です。\n", lower_value, upper_value);
  } else {
    printf("\n基準値a(%d)未満か、\n基準値b(%d)以上です。\n", lower_value, upper_value);
  }
  printf("==============================\n");
}