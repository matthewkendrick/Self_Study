#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int rand_max = 50, rand_min = 1;
  int data_size = rand() % rand_max + rand_min, data[data_size];
  int i, j, cnt = 0;

  printf("==============================\n");
  for (i = 0; i < data_size; i++) {
    data[i] = 1;
  }

  for (i = 1; i <= data_size; i++) {
    for (j = 1; j <= data_size; j++) {
      if (j % i == 0) {
        data[j - 1] = data[j - 1] * -1;
      }
    }
  }

  for (i = 0; i < data_size; i++) {
    if (data[i] == -1) {
      cnt++;
    }
  }

  printf("扉が開いているロッカーは、\n %d 個あります。", cnt);
  printf("\n");
  printf("==============================\n");
}