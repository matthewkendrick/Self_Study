#include <stdio.h>
#include "../header_files/calc.h"

int main() {
  double d1, d2, d3;
  double a = 1.2, b = 3.4, c = 2.7;

  d1 = avg(a, b);
  d2 = avg(4.1, 5.7);
  d3 = avg(c, 2.8);

  printf("--------------------\n");
  printf("d1 = %f\nd2 = %f\nd3 = %f\n", d1, d2, d3);
  printf("--------------------\n");
}