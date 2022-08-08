#include "../header_files/judge.h"

void max(int a, int b, int result) {
  char str1[] = "入力された";
  char str2[] = "小さい値は";

  if (a < b) {
    result = a;
  } else {
    result = b;
  }
  printf("%s %d と %d のうち、\n%s %d です。", str1, a, b, str2, result);
}