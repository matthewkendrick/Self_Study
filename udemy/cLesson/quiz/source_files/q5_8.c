#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int min_num = 10, rand_size = 10, array_size = 5;
  int i, large = 0, small = 0, zero = 0;
  int data[array_size];
  srand((unsigned)time(NULL));

  printf("==============================\n");
  for (i = 0; i < array_size; i++) {
    data[i] = rand() % ((rand_size * 2) + 1) - min_num;
    printf("%d ", data[i]);

    if (data[i] > 0) {
      large++;
    } else if (data[i] < 0) {
      small++;
    } else {
      zero++;
    }
  }

  printf("\n\n");
  printf("0より大きい数：%d 個\n", large);
  printf("0より小さい数：%d 個\n", small);
  printf("0の個数      ：%d 個\n", zero);

  printf("==============================\n");
  return 0;
}