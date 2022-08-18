#include <stdio.h>

int main(void) {
  int a = 0;
  int st_value1 = 10;
  int st_value2 = 90;

  printf("--------------------\n");
  printf("値を入力してください\n→ ");
  scanf("%d", &a);

  if (a <= st_value1 || a >= st_value2) {
    printf("\n入力された値は、\n基準値a(%d)以下か、\n基準値b(%d)以上です。\n", st_value1, st_value2);
  }
  printf("--------------------\n");
}