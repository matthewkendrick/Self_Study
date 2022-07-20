#include <stdio.h>

int main(void)
{
  int m;
  for (m = 0; m < 10; m++) {
    if (m == 3) {
      printf("----------\n");
      continue;
    }
    if (m == 8) {
      printf("This is the end.");
      break;
    }
    
    
    printf("m: %d\n", m);
  }
  
  return 0;
}
