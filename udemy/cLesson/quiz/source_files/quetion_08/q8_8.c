#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int rand_max = 1000, rand_min = 1;
  int num, i;
  srand((unsigned)time(NULL));

  num = rand() % rand_max + rand_min;

  printf("==============================\n");
  printf("%d", num);
  printf("\n\n");
  printf("[");
  for (i = 1; i <= num; i++) {
    if (num % i == 0) {
      printf(" %d /", i);
    }
  }
  printf("/]\n");
  printf("==============================\n");
}