#include <stdio.h>

int main(void) {
  double d[] = {1.2, 3.7, 4.1, 2.0};
  double sum, avg;
  int i;

  sum = 0.0;
  for (i = 0; i < 4; i++) {
    printf("%f ", d[i]);
    sum += d[i];
  }

  printf("\n");
  
  avg = sum / 4.0;
  printf("合計値: %f\n", sum);
  printf("平均値: %f\n", avg);

  return 0;
}