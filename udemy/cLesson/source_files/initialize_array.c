#include <stdio.h>

int main(void) {
  int n[] = {5, 4, 3, 2, 1, 0};
  int i;

  for (i = 0; i < 6; i++) {
    printf("n[%d] = %d\n", i, n[i]);
  }
  printf("\n");
  
  return 0;
}