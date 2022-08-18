#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand((unsigned)time(NULL));

  int rand_max = 30, rand_min = 1;
  int data_size = 100;
  int data[data_size];
  int n1 = rand() % rand_max + rand_min, n2 = 1, n3 = 2, n4;
  int i = 0, max;

  printf("==============================\n");
  printf("%d", n1);
  printf("\n");
  printf("%d", n2);
  printf("\n\n");

  while (n3 < data_size) {
    data[i] = n3;
    n4 = n1 + n2 + n3;

    n1 = n2;
    n2 = n3;
    n3 = n4;
    i++;
  }

  max = i;
  for (i = 0; i < max; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
  printf("==============================\n");
}