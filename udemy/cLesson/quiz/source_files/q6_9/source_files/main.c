#include "../header_files/draw.h"

int main(void) {
  int height, vertical;

  printf("==============================\n");

  printf("タテに表示する%sの数を入力してください\n→ ", str);
  scanf("%d", &height);
  printf("\n");
  printf("ヨコに表示する%sの数を入力してください\n→ ", str);
  scanf("%d", &vertical);

  printf("\n");
  symbol(height_num, vertical_num);
  
  printf("==============================\n");
}