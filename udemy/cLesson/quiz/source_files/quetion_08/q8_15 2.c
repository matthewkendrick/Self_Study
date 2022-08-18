#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int rand_max = 99, rand_min = 2;
  int i, n;
  char c = ' ';
  srand((unsigned)time(NULL));
  n = rand() % rand_max + rand_min;

  printf("==============================\n");
  printf("%d =", n);
  for (i = 2; n != 1; i++) {
    while (n % i == 0) {
      n = n / i;
      printf("%c%d", c, i);
      c = '*';
    }
  }
  printf("\n");
  printf("==============================\n");
}