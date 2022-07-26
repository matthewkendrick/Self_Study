#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i;
  int st_value = 5;
  srand((unsigned)time(NULL));

  printf("\n==============================\n");
  int n = rand() % 10 + 1;
  if (n >= st_value) {
    for (i = 0; i < st_value; i++) {
      printf("★ ");
    } 
    printf("\n");
  } else {
    printf("出力された値：%d\n", n);
  }
  printf("\n- 終了 -");
  printf("\n==============================\n");
}