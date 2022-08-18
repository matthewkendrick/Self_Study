#include <stdio.h>

void stars(int);
char str[] = "*";

int main(void) {
  int a;

  printf("==============================\n");
  printf("%s を表示する回数を入力してください\n→ ", str);
  scanf("%d", &a);
  stars(a);
  printf("==============================\n");
}

void stars(int a) {
  int i;

  if (a > 0) {
    for (i = 0; i < a; i++) {
      printf("%s", str);
    }
    printf("\n");
  } else {
    printf("\n");
    printf("0 より大きい値を入力してください。");
    printf("\n");
  }
}