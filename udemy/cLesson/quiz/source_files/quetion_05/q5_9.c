#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, array_size = 10;
  int rand_min = 1, rand_max = 100;
  int high, row, greater_num = 80, less_num = 50;
  int data[array_size];
  srand((unsigned)time(NULL));

  printf("==============================\n");
  for (i = 0; i < array_size; i++) {
    data[i] = rand() % rand_max + rand_min;
    printf("%d ", data[i]);
  }

  printf("\n\n");
  printf("%d以上の数：\n", greater_num);
  for (i = 0; i < array_size; i++) {
    if (data[i] >= greater_num) {
      printf("%d ", data[i]);
    }
  }
  
  printf("\n\n");
  printf("%d未満の数：\n", less_num);
  for (i = 0; i < array_size; i++) {
    if (data[i] < less_num) {
      printf("%d ", data[i]);
    }
  }
  printf("\n");
  printf("==============================\n");
}