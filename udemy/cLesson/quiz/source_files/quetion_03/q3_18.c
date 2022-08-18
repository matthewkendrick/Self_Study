#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int temp = (rand() % 45 + 1) - 10;
  char text[] = "今日は";

  printf("\n==============================\n");
  printf("摂氏%d度\n", temp);
  if (temp > 30) {
    printf("%s真夏日です。", text);
  } else if (temp >= 25 && temp < 30) {
    printf("%s夏日です。", text);
  } else if (temp < 0) {
    printf("%s真冬日です。", text);
  }
  printf("\n==============================\n");
}