#include <stdio.h>

int main(void) {
  int i, j;
  int num, exam_num = 10000;

  printf("==============================\n");
  printf("[");
  for (i = 1; i <= exam_num; i++) {
    num = 0;

    for (j = 1; j < i; j++) {
      if ((i % j) == 0) {
        num += j;
      }
    }

    if (j == num) {
      printf(" %d /", j);
    }
  }
  printf("/]");
  printf("\n");
  printf("==============================\n");
}