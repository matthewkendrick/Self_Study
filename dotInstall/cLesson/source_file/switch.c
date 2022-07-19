#include <stdio.h>

int main(void)
{
  int rank = 20;

  switch (rank)
  {
  case 1:
    printf("You got Gold medal!\n");
    break;
  case 2:
    printf("You got Silver medal!\n");
    break;
  case 3:
    printf("You got Bronze medal!\n");
    break;
  default:
    printf("You don't have any medals...\n");
    break;
  }
  return 0;
}
