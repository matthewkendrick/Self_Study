#include "../header_files/show.h"

int main(void) {
  int rand_max = 1000, rand_min = 100;
  srand((unsigned)time(NULL));

  int a = rand() % rand_max + rand_min, b = rand() % rand_max + rand_min;
  int *p = NULL;

  printf("==============================\n");
  p = &a;
  show(a, b, *p);

  *p = 300;
  printf("\n");
  show(a, b, *p);

  p = &b;
  printf("\n");
  show(a, b, *p);

  *p = 400;
  printf("\n");
  show(a, b, *p); //ここでは常に [a = 300 / b = 400 / c = 400] となります。
  printf("\n==============================\n");
}