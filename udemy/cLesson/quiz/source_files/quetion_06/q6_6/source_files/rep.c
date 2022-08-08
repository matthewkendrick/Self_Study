#include "../header_files/rep.h"

void stars(int a) {
  char str2[] = "#";
  int i;

  if (a > 0) {
    for (i = 0; i < a; i++) {
      printf("%s", str2);
    }
    printf("\n");
  } else {
    printf("\n");
    printf("0 より大きい値を入力してください。");
    printf("\n");
  }
}