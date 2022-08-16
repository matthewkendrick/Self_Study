#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int rand_max = 10, rand_min = 1;
  int data_size = 10;
  int data_1[data_size], data_2[data_size], data_3[data_size], data_4[data_size];
  int i, j, val_1, val_2;
  srand((unsigned)time(NULL));

  printf("n1");
  for (i = 0; i < data_size; i++) {
    data_1[i] = rand() % rand_max + rand_min;
    printf("%d ", data_1[i]);
  }

  printf("n2");
  for (i = 0; i < data_size; i++) {
    data_2[i] = rand() % rand_max + rand_min;
    printf("%d ", data_2[i]);
  }
}