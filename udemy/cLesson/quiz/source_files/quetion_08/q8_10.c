#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
 int rand_max = 200, rand_min = 1;
 int data_size = 20, odd_size = 20, even_size = 20;
 int data[data_size], odd[odd_size], even[even_size];
 int i;

 srand((unsigned)time(NULL));

  printf("==============================\n");
  for (i = 0; i < data_size; i++) {
    data[i] = rand() % rand_max + rand_min;
    printf("%d ", data[i]);
    if (data[i] % 2 == 0) {
      even[i] = data[i];
      odd[i] = 0;
    } else {
      even[i] = 0;
      odd[i] = data[i];
    }
  }

  printf("\n\n");
  printf("偶数：");
  for (i = 0; i < odd_size; i++) {
    if (even[i] != 0) {
      printf("%d ", even[i]);
    }
  }

  printf("\n");
  printf("奇数：");
  for (i = 0; i < odd_size; i++) {
    if (odd[i] != 0) {
      printf("%d ", odd[i]);
    }
  }
  printf("\n");
  printf("==============================\n");
}