#include <stdio.h>

int main(void) {
  int i, num;
  printf("回数を入力してください → ");
  scanf("%d", &num);
  printf("あなたが実行したい回数は、%d回です。\n", num);

  /*
  ①　「0」を入力した時に、while文は何も表示されません。
  ②　ところが、do while文の場合は＊が1つ表示されるという違いに気づく事ができると思います。
  */

  printf("\nwhileで実行した場合\n");
  i = 1;
  while (i <= num) {
    printf("* ");
    i++;
  }

  printf("\n");

  printf("\ndo whileで実行した場合\n");
  i = 1;
  do {
    printf("* ");
    i++;
  } while (i <= num);

  printf("\n");

  return 0;
}