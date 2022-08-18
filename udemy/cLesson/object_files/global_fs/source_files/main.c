#include <stdio.h>
#include "../header_files/calc.h"
#include "../header_files/showResult.h"

int main(void) {
  int a = 2, b = 3;
  printf("%d + %d = ", a, b);
  add(a, b);
  showAnswer();
  printf("%d - %d = ", a, b);
  sub(a, b);
  showAnswer();
}