#include <stdio.h>

int main(void) {
  int a, b;
  int st_value = 15;

  printf("\n==============================\n");
  for (a = 0; a < st_value; a++) {
    for (b = 0; b < st_value; b++) {
      if (b == a) {
        printf("□ ");
      } else {
        printf("■ ");
      }
    }
    printf("\n");
  }
  printf("\n==============================\n");
}