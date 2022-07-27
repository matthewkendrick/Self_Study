#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, ARRAY_SIZE = 10;
  int data[ARRAY_SIZE];
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  for (i = 0; i < ARRAY_SIZE; i++) {
    int rand_num = rand() % 10 + 1;
    int data[] = {rand_num};
  }
  printf("%d ", data[i]);
  if (data % 2 == 0) {
    printf("\n偶数：%d \n", data[i]);
  }
  if (data % 2 == 1) {
    printf("奇数：%d \n", data[i]);
  }
  printf("\n");
  printf("\n==============================\n");
}