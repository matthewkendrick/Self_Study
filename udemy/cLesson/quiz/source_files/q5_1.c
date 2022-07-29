#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int st_value = 6;
  int i, n[st_value];
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  for (i = 0; i < st_value; i++) {
    int r = rand() % 10 + 1;
    n[i] = r;

    printf("a[%d]=%d\n", i, n[i]);
  }
  printf("==============================\n");
}