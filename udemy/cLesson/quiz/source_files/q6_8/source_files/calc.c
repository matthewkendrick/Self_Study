#include "../header_files/calc.h"

int get_absolute(int num) {
  if (num <= 0) {
    return num * (- 1);
  } else {
    return num;
  }
}