#include "../header_files/calc.h"

int main(void) {
  int check_range = 10000;
  int i, fraternityNum;

  printf("==============================\n");
  for (i = 1; i < check_range; i++) {
    fraternityNum = fraternity(i);
    if (i == fraternity(fraternityNum) && i < fraternityNum) {
      printf("%d = %d", i, fraternityNum);
      printf("\n");
    }
  }
  printf("==============================\n");
}

int fraternity();