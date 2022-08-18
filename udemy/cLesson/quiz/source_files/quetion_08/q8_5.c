#include <stdio.h>

int main(void) {
  int i, num;
  int digit = 0, exam_num = 3, check_max = 50;

  printf("==============================\n");
  for (i = 1; i <= check_max; i++) {
    num = i;
    while (num != 0) {
      num = num / 10;
      digit++;
    }

    if (digit == 1) {
      if (i % exam_num == 0) {
        printf("%d ", i);
      } 
    } else {
      if (i % exam_num == 0 || i % 10 == exam_num || (i / 10) == exam_num) {
        printf("%d ", i);
      }
    }
    digit = 0;
  }
  printf("\n");
  printf("==============================\n");
}