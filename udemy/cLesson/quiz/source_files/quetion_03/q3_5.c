#include <stdio.h>

int main(void) {
  int a = 0;
  int st_value1 = 20;
  int st_value2 = 100;

  printf("--------------------\n");
  printf("値を入力してください\n→ ");
  scanf("%d", &a);

  if (a >= st_value1 && a < st_value2) {
    printf("\n入力された値は、\n基準値a(%d)以上、\n基準値b(%d)未満です。\n", st_value1, st_value2);
  }
  printf("--------------------\n");
  return 0;
}