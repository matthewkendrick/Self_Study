#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
  srand((unsigned)time(NULL));
  int rand_max = 20;
  int n = rand() % (rand_max * 2) - rand_max;
  double d1 = rand() % (double)((rand_max * 2) - rand_max);
  printf("%d", n);
  printf("%.2f", d1);
}