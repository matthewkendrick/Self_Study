#include <stdio.h>
#define SIZE 5

int main(void) {
  int ar1[SIZE];
  int* p1 = NULL;
  char ar2[SIZE];
  char* p2 = NULL;
  int i;

  printf("==============================\n");
  for (i = 0; i < SIZE; i++) {
    ar1[i] = i;
    ar2[i] = 'A' + i;
  }

  p1 = &ar1[0];
  p2 = &ar2[0];
  for (i = 0; i < SIZE; i++) {
    printf("ar1[%d] = %d\n*(p1 + %d) = %d", i, ar1[i], i, *(p1 + i));
    printf("\n------------------------------\n");
    printf("ar2[%d] = %d\n*(p2 + %d) = %c", i, ar2[i], i, *(p2 + i));
  }
  printf("\n");
  printf("==============================\n");
}