#include <stdio.h>

int main(void) {
  int a, b, c;
  int n1, n2;

  printf("==============================\n");
  for (a = 0; a <= 100; a++) {
    for (b = 0; b <= 100; b++) {
      for (c = 0; c <= 100; c++) {
        if (b >= a) {
          n1 = a * a + b * b;
          n2 = c * c;
          if (n1 == n2) {
            printf("\n\n");
            printf("a = %d, b = %d, c = %d\nresult = %d", a, b, c, n1);
            printf("\n");
          }
        }
      }
    }
  }
  printf("==============================\n");
}