#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, ARRAY_SIZE = 10;
  int data[ARRAY_SIZE];
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  for (i = 0; i < ARRAY_SIZE; i++) {
    data[i] = rand() % ARRAY_SIZE + 1;
    printf("%d ", data[i]);
  }

  printf("\n\n");
  printf("偶数：");
  for (i = 0; i < ARRAY_SIZE; i++) {
    if (data[i] % 2 == 0) {
      printf("%d ", data[i]);
    }
  }

  printf("\n");
  printf("奇数：");
  for (i = 0; i < ARRAY_SIZE; i++) {
    if (data[i] % 2 == 1) {
      printf("%d ", data[i]);
    }
  }
  printf("\n");
  printf("\n==============================\n");
}