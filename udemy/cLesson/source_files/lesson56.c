#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int rand_max = 10000, rand_min = 1000;
  char s1[] = "1000", s2[] = "12.345";
  int a;
  double b;

  printf("==============================\n");
  a = atoi(s1);
  b = atof(s2);
  printf("a = %d | b = %.3f", a, b);

  printf("\n");

  a = rand() % rand_max + rand_min;
  b = rand() % rand_max + rand_min;
  printf("a = %d | b = %.3f", a, b);

  printf("\n==============================\n");
}