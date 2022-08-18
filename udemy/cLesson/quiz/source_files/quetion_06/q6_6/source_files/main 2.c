#include "../header_files/rep.h"

int main(void) {
  char str1[] = "#";
  int a;

  printf("==============================\n");
  printf("%s を表示する回数を入力してください\n→ ", str1);
  scanf("%d", &a);
  stars(a);
  printf("==============================\n");
}