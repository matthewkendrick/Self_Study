#include <stdio.h>

int main(void) {
  int i = 1;
  /*
  ① do whileは条件に合わなくとも、1回は必ず{ }内の処理が実行されます。
  */
  do {
    printf("%d ", i);
    i++;
  } while (i <= 5);

  printf("\n");

  return 0;
}