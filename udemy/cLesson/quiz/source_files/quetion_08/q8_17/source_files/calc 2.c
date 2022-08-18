#include "../header_files/calc.h"

int fraternity(int num) {
  int i, n = 0;

  for (i = 1; i * 2 <= num; i++) {
    if (num % i == 0 && num != 0) {
      n += i;
    }
  }
  return n;
}