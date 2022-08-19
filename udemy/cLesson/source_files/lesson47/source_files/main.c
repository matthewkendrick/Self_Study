#include "../header_files/swap.h"

int main(void) {
  int rand_max = 30, rand_min = 10;
  srand((unsigned)time(NULL));
  int a = rand() % (rand_max - rand_min) + rand_min, b = rand() % (rand_max - rand_min) + rand_min;

  printf("====================\n");
  printf("a = %d | b = %d\n", a, b);

  swap(&a, &b);
  printf("a = %d | b = %d\n", a, b);
  printf("====================\n");
}