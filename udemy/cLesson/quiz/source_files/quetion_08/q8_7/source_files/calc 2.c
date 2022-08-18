#include "../header_files/calc.h"

int gcd(int x, int y) {
  int r;
  while ((r = x % y) != 0) {
    x = y;
    y = r;
  }
  return y;
}

int lcm(int x, int y) {
  return ((x * y) / gcd(x, y));
}