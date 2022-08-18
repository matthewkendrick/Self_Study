#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
  srand((unsigned)time(NULL));
  int randMax_intA = 50, n = rand() % (randMax_intA * 2) - randMax_intA;
  int randMax_intB = 50, m = rand() % (randMax_intB * 2) - randMax_intB;
  double randMax_doubleN = ((double)n * 2) / 10.0, randMax_doubleM = ((double)m * 2) / 10.0;
  double d1 = randMax_doubleN, d2 = randMax_doubleM;

  printf("==================================================\n");
  printf("%d の絶対値は %d、\n", n, abs(n));
  printf("%.1f の絶対値は %.1f、\n", d1, fabs(d1));
  printf("%.1f の２乗は %.1f、\n", d2, pow(d2, 2));
  printf("%.1f の平方根は %.1f です。\n", d2, sqrt(d2));
  printf("==================================================\n");
}