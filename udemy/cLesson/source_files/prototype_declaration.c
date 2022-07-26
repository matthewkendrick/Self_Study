#include <stdio.h>

double avg(double, double);

/*
①　プロトタイプ宣言をしないと、main関数の前に宣言しなければいけない関数がたくさん並んでしまい、
   見通しが悪くなってしまいます。
② main関数をなるべく先頭に持ってくるために、プロトタイプ宣言が必要です。
*/

int main(void) {
  double d1, d2, d3;
  double a = 1.2, b = 3.4, c = 2.7;

  d1 = avg(a, b);
  d2 = avg(4.1, 5.7);
  d3 = avg(c, 2.8);

  printf("d1 = %f\nd2 = %f\nd3 = %f\n", d1, d2, d3);
}

double avg(double l, double m) {
  double r = (l + m) / 2.0;
  return r;
}