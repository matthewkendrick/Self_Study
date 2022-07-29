#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int array_size = 5, rand_num_size = 20;
  int i, avg, large_num, small_num;
  int total = 0;
  int data[array_size];
  srand((unsigned)time(NULL));

  printf("==============================\n");

  for (i = 0; i < array_size; i++) {
    data[i] = rand() % rand_num_size + 1;
    printf("%d ", data[i]);
    total += data[i];
    avg = total / array_size;
  }
  printf("\n\n");
  printf("合計値：%d\n", total);
  printf("平均値：%.d\n", avg);

  printf("\n");
  printf("平均値より大きい数：");
  for (i = 0; i < array_size; i++) {
    if (data[i] > avg) {
      printf("%d ", data[i]);
    }
  }

  printf("\n");
  printf("平均値より小さい数：");
  for (i = 0; i < array_size; i++) {
    if (data[i] < avg) {
      printf("%d ", data[i]);
    }
  }
  printf("\n==============================\n");
}