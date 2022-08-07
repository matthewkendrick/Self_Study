#include "../header_files/draw.h"

void symbol(int height_num, int vertical_num) {
  int i, j;

  if (height_num != 0 && vertical_num != 0) {
    for (i = 0; i < height_num; i++) {
      for (j = 0; j < vertical_num; j++) {
        printf("%s", str);
      }
      printf("\n");
    }
  }
}