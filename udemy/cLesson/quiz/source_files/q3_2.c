#include <stdio.h>

int main(void) {
  int a = 0;
  int st_value = 1;

  printf("--------------------\n");
  printf("値を入力してください\n→ ");
  scanf("%d", &a);

  if (a != st_value) {
    printf("\n入力された値は、\n基準値(%d)ではありません。\n", st_value);
  }
  printf("--------------------\n");
}