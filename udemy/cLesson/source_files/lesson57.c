#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 256

int main(void) {
  srand((unsigned)time(NULL));
  int rand_max = 1000, rand_min = 100;
  char s1[SIZE], s2[SIZE];
  int a = rand() % (rand_max - rand_min) + rand_min, b = rand() % (rand_max - rand_min) + rand_min;

  sprintf(s1, "a の値は %d 、", a);
  sprintf(s2, "b の値は %d です。", b);

  printf("====================");
  printf("\n");
  puts(s1);
  puts(s2);
  printf("====================\n");
}