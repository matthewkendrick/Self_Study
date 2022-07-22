#include <stdio.h>

double avg(double l, double m) {
  double r = (l + m) / 2.0;

  return r;
}

int main(void) {
  double d1, d2, d3, d4;
  double a = 1.2, b = 3.4, c = 2.7;

  d1 = avg(a, b);
  d2 = avg(4.1, 10.7);
  d3 = avg(1.0, d2);
  d4 = avg(d2, d3);

  printf("d1 = %f\nd2 = %f\nd3 = %f\nd4 = %f\n", d1, d2, d3, d4);

  return 0;
}