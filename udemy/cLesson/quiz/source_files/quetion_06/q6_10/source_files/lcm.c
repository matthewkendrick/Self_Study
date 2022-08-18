#include "../header_files/lcm.h"

int lcm(int n1, int n2) {
  int c, tmp;

  c = n1 * n2;
  if (n1 < n2) {
    tmp = n1;
    n1 = n2;
    n2 = tmp;
  }

  tmp = n1 % n2;
  while (tmp != 0) {
    n1 = n2;
    n2 = tmp;
    tmp = n1 % n2;
  }
  
  return c / n2;
}