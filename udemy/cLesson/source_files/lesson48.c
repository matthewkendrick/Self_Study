#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int rand_max = 20, rand_min = 1;
  srand((unsigned)time(NULL));
  int *p = NULL;

  printf("==========\n");
  int num = rand() % rand_max + rand_min;
  printf("%d | ", num);

  p = &num; //アドレスをこのように指定してあげないとプログラムが異常終了してしまいます。
  *p = rand() % rand_max + rand_min;
  printf("%d\n", num);
  printf("==========\n");
}