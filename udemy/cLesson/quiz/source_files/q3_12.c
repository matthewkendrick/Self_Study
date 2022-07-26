#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  char t[] = "出力された値は、\n";

  srand((unsigned)time(NULL));
  int n = (rand() % 20 + 1) - 10;

  printf("==============================\n");
  if (n < 0) {
    printf("%s負の値(%d)です。\n", t, n);
  } else if (n > 0) {
    printf("%s正の値(%d)です。\n", t, n);
  } else {
    printf("%s0です。\n", t);
  }
  printf("==============================\n");
}