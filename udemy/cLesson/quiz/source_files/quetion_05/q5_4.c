#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, array_size = 10;
  int data[array_size];
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  for (i = 0; i < array_size; i++) {
    data[i] = rand() % array_size + 1;
    printf("%d ", data[i]);
  }

  printf("\n\n");
  printf("5以上の数：");
  for (i = 0; i < array_size; i++) {
    if (data[i] >= 5) {
      printf("%d ", data[i]);
    }
  }

  printf("\n");
  printf("5未満の数：");
  for (i = 0; i < array_size; i++) {
    if (data[i] < 5) {
      printf("%d ", data[i]);
    }
  }
  printf("\n");
  printf("==============================\n");
}