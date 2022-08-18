#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, max, min, array_size = 15;
  int data[array_size];
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  for (i = 0; i < array_size; i++) {
    data[i] = rand() % array_size + 1;
    printf("%d ", data[i]);
  }

  printf("\n\n");
  for (i = 0; i < array_size; i++) {
    if (max < data[i]) {
      max = data[i];
    }
  }
  printf("最大値：%d\n", max);

  for (i = 0; i < array_size; i++) {
    if (min > data[i]) {
      min = data[i];
    }
  }
  printf("最小値：%d\n", min);
  printf("==============================\n");

  return 0;
}