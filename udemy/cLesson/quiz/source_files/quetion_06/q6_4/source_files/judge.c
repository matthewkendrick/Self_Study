#include "../header_files/judge.h"

void numJudge(int a) {
  char str1[] = "入力された値は、";
  char str2[] = "です。";
  if (a == 0) {
    printf("%s0 %s\n", str1, str2);
  } else if (a % 2 == 0) {
    printf("%s偶数%s\n", str1, str2);
  } else {
    printf("%s奇数%s\n", str1, str2);
  }
}