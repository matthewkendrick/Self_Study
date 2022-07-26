#include <stdio.h>

int main(void) {
  int num;
  printf("1~3の値を入力してください → ");
  scanf("%d", &num);
  printf("入力された値は、「 %d 」です。\n", num);

  switch (num) {
  /* 
    a. 入力された値（NUM）が1、2、3の各々の場合で以下のように処理を分けられています。
    b. 処理を書いた後にはその処理を終わらせるために、必ず "break" が必要です。
    c. case以外の全ての場合の処理をdefaultとして記述します。
  */
  case 1:
    printf("One\n");
    break;
  case 2:
    printf("Two\n");
    break;
  case 3:
    printf("Three\n");
    break;
  
  default:
    printf("%dは不適切な値です。\n入力し直してください。\n", num);
    break;
  }

  return 0;
}