#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i = 0;
  int st_value = 5;

  printf("\n==============================\n");
  srand((unsigned)time(NULL));
  for (i = 0; i < st_value; i++) {
    int n = rand() % 100 + 1;
    printf("%d\n", n);
  }
  printf("\n- 終了 -");
  printf("\n==============================\n");
}