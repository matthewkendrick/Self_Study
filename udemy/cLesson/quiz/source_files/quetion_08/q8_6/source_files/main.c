#include "../header_files/calc.h"

int main(void) {
  int denominator_1, denominator_2, denominator_result, denominator_min = 2;
  int numerator_1, numerator_2, numerator_result, numerator_min = 1;
  int num, num_max = 10;

  srand((unsigned)time(NULL));

  denominator_1 = rand() % (num_max - 1) + denominator_min;
  denominator_2 = rand() % (num_max - 1) + denominator_min;
  numerator_1 = rand() % num_max + numerator_min;
  numerator_2 = rand() % num_max + numerator_min;

  denominator_result = lcm(denominator_1, denominator_2);
  printf("==============================\n");
  printf("%d/%d + %d/%d = ", numerator_1, denominator_1, numerator_2, denominator_2);
  if (denominator_1 != denominator_result) {
    numerator_1 = numerator_1 * (denominator_result / denominator_1);
  }
  if (denominator_2 != denominator_result) {
    numerator_2 = numerator_2 * (denominator_result / denominator_2);
  }

  numerator_result = numerator_1 + numerator_2;
  num = gcd(numerator_result, denominator_result);
  denominator_result = denominator_result / num;
  numerator_result = numerator_result / num;
  if (numerator_result % denominator_result == 0) {
    printf("%d\n", numerator_result / denominator_result);
  } else if (numerator_result > denominator_result) {
    printf("%d.%d/%d\n", numerator_result / denominator_result, numerator_result % denominator_result, denominator_result);
  } else {
    printf("%d/%d\n", numerator_result, denominator_result);
  }
  printf("==============================\n");
}