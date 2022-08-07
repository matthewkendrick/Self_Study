#include "../header_files/draw.h"

void symbol(int height, int vertical) {
  int i, j;

  if (height != 0 && vertical != 0) {
    for (i = 0; i < height; i++) {
      for (j = 0; j < vertical; j++) {
        printf("%s", str);
      }
      printf("\n");
    }
  }
}