#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int min_num = 10, rand_size = 10, array_size = 5;
  int i, large = 0, small = 0;
  int data[array_size];
  srand((unsigned)time(NULL));

  printf("==============================\n");
  for (i = 0; i < array_size; i++) {
    data[i] = rand() % ((rand_size * 2) + 1) - min_num;
    printf("%d ", data[i]);
  }
  printf("\n==============================\n");
  return 0;
}