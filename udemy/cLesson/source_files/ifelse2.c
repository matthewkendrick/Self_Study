#include <stdio.h>

int main(void) {
  int num;
  printf("1~3の値を入力して下さい → ");
  scanf("%d", &num);

  if (num == 1) {
    printf("One\n");
  } else if (num == 2) {
    printf("Two\n");
  } else if (num == 3) {
    printf("Three\n");
  } else {
    printf("%dは不適切な値です。\n", num);
  }
  
  return 0;
}