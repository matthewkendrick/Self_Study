#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, array_size = 15;
  int data[array_size];
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  for (i = 0; i < array_size; i++) {
    data[i] = rand() % 10 + 1;
    printf("%d ", data[i]);
  }

  printf("\n\n");
  printf("3の倍数：\n");
  for (i = 0; i < array_size; i++) {
    if (data[i] % 3 == 0) {
      printf("%d ", data[i]);
    }
  }

  printf("\n\n");
  printf("3の倍数以外の数：\n");
  for (i = 0; i < array_size; i++) {
    if (data[i] % 3 != 0) {
      printf("%d ", data[i]);
    }
  }
  printf("\n");
  printf("==============================\n");
}