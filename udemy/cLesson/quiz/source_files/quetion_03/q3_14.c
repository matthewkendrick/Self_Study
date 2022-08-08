#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int a = rand() % 10 + 1;
  int b = rand() % 10 + 1;

  printf("==============================\n");
  printf("a = %d\nb = %d\n", a, b);
  if (a > b) {
    printf("\naの方が大きいです。\n");
  } else if (a < b) {
    printf("\nbの方が大きいです。\n");
  } else {
    printf("\n等しいです。\n");
  }
  printf("==============================\n");
}