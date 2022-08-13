#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int num, result = 0;
  int rand_max = 1000000, rand_min = 1;
  srand((unsigned)time(NULL));

  num = rand() % rand_max + rand_min;

  printf("==============================\n");
  printf("出力された値は %d で、\n", num);
  while (num != 0) {
    num = num / 10;
    result++;
  }
  printf("桁数は %d桁 です。\n", result);
  printf("==============================\n");
}