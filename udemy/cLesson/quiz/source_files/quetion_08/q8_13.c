#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int rand_max = 10, rand_min = 1;
  int data_size = 10;
  int data_1[data_size], data_2[data_size], data_3[data_size], data_4[data_size];
  int i, j, val_1, val_2;
  srand((unsigned)time(NULL));

  printf("==============================\n");
  printf("n1 : ");
  for (i = 0; i < data_size; i++) {
    data_1[i] = rand() % rand_max + rand_min;
    printf("%d ", data_1[i]);
  }

  printf("\n");
  printf("n2 : ");
  for (i = 0; i < data_size; i++) {
    data_2[i] = rand() % rand_max + rand_min;
    printf("%d ", data_2[i]);
  }

  for (i = 0; i < data_size; i++) {
    val_1 = 0;
    val_2 = 0;

    for (j = 0; j < data_size; j++) {
      if (data_1[j] == i + 1) {
        val_1 = 1;
        break;
      }
    }

    for (j = 0; j < data_size; j++) {
      if (data_2[j] == i + 1) {
        val_2 = 1;
        break;
      }
    }

    if (val_1 == 1 && val_2 == 1) {
      data_3[i] = i + 1;
      data_4[i] = 0;
    } else if (val_1 == 0 && val_2 == 0) {
      data_3[i] = 0;
      data_4[i] = 0;
    } else {
      data_3[i] = 0;
      data_4[i] = i + 1;
    }
  }

  printf("\n");
  printf("n3 : ");
  for (i = 0; i < data_size; i++) {
    if (data_3[i] != 0) {
      printf("%d ", data_3[i]);
    }
  }

  printf("\n");
  printf("n4 : ");
  for (i = 0; i < data_size; i++) {
    if (data_4[i] != 0) {
      printf("%d ", data_4[i]);
    }
  }
  printf("\n");
  printf("==============================\n");
}