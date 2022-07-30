#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int array_size = 10, rand_max = 9, rand_min = 0;
  int i, j, data[array_size][array_size];
  srand((unsigned)time(NULL));

  printf("==============================\n");
  for (i = 0; i < array_size; i++) {
    for (j = 0; j < array_size; j++) {
      data[i][j] = rand() % rand_max + rand_min;
      printf("%d ", data[i][j]);
    }
    printf("\n");
  }
  printf("==============================\n");
}