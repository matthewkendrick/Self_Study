#include <stdio.h>
#include "../header_files/randLib.h"

int main(void) {
  int i, num;
  init_rand();
  for (i = 0; i < 10; i++) {
    num = getRand(-10, 10);
    printf("乱数： %d\n", num);
  }
}