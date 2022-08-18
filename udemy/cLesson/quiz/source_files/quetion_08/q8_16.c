#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int rand_max = 100, rand_min = 1;
  int data_size = 10, data[data_size];
  int i, j, tmp = 0;

  printf("==================================================\n");
  for (i = 0; i < data_size; i++) {
    data[i] = rand() % rand_max + rand_min;
  }

  for (i = 0; i < data_size; i++) {
    for (j = 0; j < data_size; j++) {
      if (data[i] < data[j]) {
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }

  for (i = 0; i < data_size; i++) {
    printf(" %d /", data[i]);
  }

  printf("/");
  printf("\n");
  printf("==================================================\n");
}