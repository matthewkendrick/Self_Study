#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int n;
  int st_value = 13;
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  while (1) {
    int n = rand() % 100 + 1;
    printf("%d\n", n);
    if (n % st_value == 0) {
      break;
    }
  }
  printf("\n- 終了 -");
  printf("\n==============================\n");
}