#include <stdio.h>

int main(void) {
  int year = 0;
  char text[] = "入力された年";

  printf("\n==============================\n");
  printf("西暦を入力してください → ");
  scanf("%d", &year);
  printf("\n");
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
      printf("%s(%d年)は\n閏年です。", text, year);
  } else {
    printf("%s(%d年)は\n閏年ではありません。", text, year);
  }
  printf("\n==============================\n");
}