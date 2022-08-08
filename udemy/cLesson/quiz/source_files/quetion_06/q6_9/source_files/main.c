#include "../header_files/draw.h"

int main(void) {
  char str1[] = " \" ■ \" ";
  int height, vertical;

  printf("==============================\n");

  printf("タテに表示する%sの数を入力してください\n→ ", str1);
  scanf("%d", &height);
  printf("\n");
  printf("ヨコに表示する%sの数を入力してください\n→ ", str1);
  scanf("%d", &vertical);

  printf("\n");
  symbol(height, vertical);
  
  printf("==============================\n");
}