#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int n = rand() % 10 + 1;
  int i;

  printf("\n==============================\n");
  if (n % 2 == 0) {
    for (i = 0; i < n; i++) {
      printf("★ ");
    }
  } else {
    for (i = 0; i < n; i++) {
      printf("☆ ");
    }
  }
  printf("\n==============================\n");
}