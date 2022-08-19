#include <stdio.h>

int main(void) {
  int data_size = 4;
  int d[] = {2, 4, 6, 8};
  int *p1 = NULL, *p2 = NULL, *p3 = NULL;
  int i;

  printf("====================\n");
  p1 = d;
  p2 = d;
  p3 = d;
  for (i = 0; i < data_size; i++) {
    printf("%d %d %d %d\n", *(d + i), p1[i], *p2, *p3);
    p2++;
  }
  printf("====================\n");
}