#include <stdio.h>

int main(void) {
  int sales[3];
  sales[0] = 200;
  sales[1] = 400;
  sales[2] = 600;
  printf("%d万円\n", sales[1]);

  int sales2[3] = {200, 400, 600};
  printf("%d万円\n", sales2[2]);
  
  return 0;
}