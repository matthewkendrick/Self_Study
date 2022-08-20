#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(void) {
  int* p1 = NULL;
  double *p2 = NULL;
  int i;

  p1 = (int*)malloc(sizeof(int)*SIZE);
  p2 = (double*)malloc(sizeof(double)*SIZE);

  printf("==============================\n");
  for (i = 0; i < SIZE; i++) {
    p1[i] = i;
    p2[i] = i / 10.0;
  }

  for (i = 0; i < SIZE; i++) {
    printf("p1[%d] = %d | p2[%d] = %.2f\n", i, p1[i], i, p2[i]);
  }
  printf("==============================\n");

  free(p1);
  free(p2);
}