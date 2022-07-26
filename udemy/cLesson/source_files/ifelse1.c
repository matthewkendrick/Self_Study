#include <stdio.h>

int main(void) {
  int a;
  char str1[] = "数値を入力: ";
  char str2[] = "入力された値は、";
  
  printf("%s", str1);
  scanf("%d", &a);

  if (a > 0) {
    printf("%s正の数です。\n", str2);
  }  else {
    printf("%s負の数です。\n0より大きい数を入力してください。", str2);
  }

  return 0;
}