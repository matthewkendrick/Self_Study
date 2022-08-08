#include <stdio.h>

int main(void) {
  int a = 0;
  int st_value = 3;

  printf("\n==============================\n");
  while (a < st_value + 1) {
    printf("a = %d\n", a);
    a++;
  }
  printf("\n==============================\n");
}