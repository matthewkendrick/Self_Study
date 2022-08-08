#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int array_size = 5, rand_min = 1, rand_max = 30;
  int i, j, data[array_size];
  int separate = 30;
  srand((unsigned)time(NULL));

  for (i = 0; i < separate; i++) {
    printf("=");
  }
  printf("\n");

  for (i = 0; i < array_size; i++) {
    data[i] = rand() % rand_max + rand_min;
    printf("%d ", data[i]);
  }

  printf("\n\n");
  for (i = 0; i < array_size; i++) {
    for (j = 0; j < data[i]; j++) {
      printf("#");
    }
  printf("\n");
  }

  for (i = 0; i < separate; i++) {
    printf("=");
  }
  printf("\n");
}