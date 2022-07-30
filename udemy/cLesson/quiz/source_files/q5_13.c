#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int array_size = 3, rand_max = 9, rand_min = 0;
  int max = rand_min, min = rand_max;
  int i, j, data[array_size][array_size];
  srand((unsigned)time(NULL));

  printf("==============================\n");
  for (i = 0; i < array_size; i++) {
    for (j = 0; j < array_size; j++) {
      data[i][j] = rand() % rand_max + rand_min;
      printf("%d ", data[i][j]);

      if (data[i][j] > max) {
        max = data[i][j];
      }

      if (data[i][j] < min) {
        min = data[i][j];
      }
    }
    printf("\n");
  }

  printf("\n");
  printf("最大値：%d\n", max);
  printf("最小値：%d\n", min);

  printf("==============================\n");
}