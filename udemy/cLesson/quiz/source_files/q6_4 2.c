#include <stdio.h>

void numJudge(int);

int main(void) {
  int a;

  printf("==============================\n");
  printf("整数値を入力してください → ");
  scanf("%d", &a);
  printf("\n");
  numJudge(a);
  printf("==============================\n");
}

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