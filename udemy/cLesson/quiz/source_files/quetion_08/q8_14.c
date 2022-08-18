#include <stdio.h>
#include <math.h>

int main(void) {
  int data_size = 30, data[data_size];
  int i, j;

  for (i = 0; i < data_size; i++) {
    data[i] = 1;
  }

  for (i = 2; i < sqrt(data_size); i++) {
    if (data[i]) {
      for (j = 0; i * (j + 2) < data_size; j++) {
        data[i * (j + 2)] = 0;
      }
    }
  }

  printf("==============================\n");
  for (i = 0; i < data_size; i++) {
    if (data[i]) {
      printf("%d ", i);
    }
  }
  printf("\n");
  printf("==============================\n");
}