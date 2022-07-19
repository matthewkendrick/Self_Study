#include <stdio.h>

float getMax(float a, float b) {
  // if (a >= b) {
  //   return a;
  // } else {
  //   return b;
  // }

  return (a >= b) ? a : b;
}

int main(void) {
  float result;
  result = getMax(2.3, 5.2);
  printf("%f\n", result);

  return 0;
}
