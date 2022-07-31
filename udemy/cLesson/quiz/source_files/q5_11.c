#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int array_size = 5, rand_min = 1, rand_max = 100;
  int rankA, rankB, rankC;
  int terms1 = 0, terms2 = 60, terms3 = 80;
  int i, data[array_size];
  srand((unsigned)time(NULL));

  printf("==============================\n");
  for (i = 0; i < array_size; i++) {
    data[i] = rand() % rand_max + rand_min;
    printf("%d ", data[i]);
  }

  printf("\n\n");
  printf("%d以上%d未満の数：\n", terms1, terms2);
  for (i = 0; i < array_size; i++) {
    if (data[i] >= terms1 && data[i] < terms2) {
      printf("%d ", data[i]);
    }
  }

  printf("\n\n");
  printf("%d以上%d未満の数：\n", terms2, terms3);
  for (i = 0; i < array_size; i++) {
    if (data[i] >= terms2 && data[i] < terms3) {
      printf("%d ", data[i]);
    }
  }

  printf("\n\n");
  printf("%d以上の数：\n", terms3);
  for (i = 0; i < array_size; i++) {
    if (data[i] >= terms3) {
      printf("%d ", data[i]);
    }
  }
  printf("\n");
  printf("==============================\n");
}