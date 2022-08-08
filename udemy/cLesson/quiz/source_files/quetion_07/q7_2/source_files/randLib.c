#include "../header_files/randLib.h"

void init_rand() {
  srand((unsigned)time(NULL));
}

int getRand(int start, int end) {
  return rand() % (end - start + 1) + start;
}