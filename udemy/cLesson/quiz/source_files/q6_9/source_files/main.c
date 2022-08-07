#include <stdio.h>
#include "draw.h"

char str[] = "■ ";

int main(void) {
  int height, vertical;

  printf("==============================\n");

  printf("タテに表示する%sの数を入力してください\n→ ", str);
  scanf("%d", &height);
  printf("\n");
  printf("ヨコに表示する%sの数を入力してください\n→ ", str);
  scanf("%d", &vertical);

  printf("\n");
  symbol(height, vertical);
  
  printf("==============================\n");
}