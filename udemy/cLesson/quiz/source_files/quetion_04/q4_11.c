#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int st_value = 5;
  int a, i, max = 0, min = 100;
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  for (i = 0; i < st_value; i++) {
    int a = rand() % min + 1;
    printf("%d\n", a);
    if (a >= max) {
      max = a;
    } else if (a <= min) {
      min = a;
    }
  }
  printf("最大値：%d\n", max);
  // printf("最小値：%d\n", min);
  printf("\n- 終了 -");
  printf("\n==============================\n");
}