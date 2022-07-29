#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int array_size = 5, rand_num_size = 10;
  int i, sum, avg;
  int data[array_size];
  srand((unsigned)time(NULL));

  printf("\n");
  printf("==============================\n");

  for (i = 0; i < array_size; i++) {
    data[i] = rand() % 10 + 1;
    printf("%d ", data[i]);
  }

  printf("\n\n");
  printf("合計値：\n");
  printf("平均値：\n");
  printf("\n");
  printf("平均値より大きい数：\n");
  printf("平均値より小さい数：\n");
  printf("==============================\n");
}