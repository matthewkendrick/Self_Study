#include <stdio.h>

int main(void) {
  int data_size = 100;
  int data[data_size];
  int n1 = 1, n2 = 1, n3;
  int i = 0, max;

  printf("==============================\n");
  printf("%d ", n1);

  while (n2 < data_size) {
    data[i] = n2;
    n3 = n1 + n2;

    n1 = n2;
    n2 = n3;
    i++;
  }

  max = i;
  for (i = 0; i < max; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
  printf("==============================\n");
}