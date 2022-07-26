#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int n = rand() % 3 + 1;

  printf("==============================\n");
  switch (n) {
  case 1:
    printf("グー\n");
    break;
  case 2:
    printf("パー\n");
    break;
  case 3:
    printf("チョキ\n");
    break;
  }
  printf("==============================\n");
}