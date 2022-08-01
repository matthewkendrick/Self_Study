#include <stdio.h>

char str[] = "* ";
void symbol(int, int);

int main(void) {
  int height, vertical;

  printf("==============================\n");
  printf("タテに表示する %sの数を入力してください\n→ ", str);
  scanf("%d", &height);
  printf("\n");
  printf("ヨコに表示する %sの数を入力してください\n→ ", str);
  scanf("%d", &vertical);

  printf("\n");
  symbol(height, vertical);

  printf("==============================\n");
}

void symbol(int height, int vertical) {
  int i, j;

  if (height != 0 && vertical != 0) {
    for (i = 0; i < height; i++) {
      for (j = 0; j < vertical; j++) {
        printf("%s", str);
      }
      printf("\n");
    }
  }
}