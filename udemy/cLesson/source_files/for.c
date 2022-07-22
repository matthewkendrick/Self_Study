#include <stdio.h>

int main(void) {
  int i;
  /*
  for(初期化処理; 条件; 実行する処理)
  ①　"実行する処理" が終わってから条件に合致するかの検証が行われます。
  ②　ただし、この "実行する処理" はループが起こってからなので、
    1回目は単純に{ }内の処理が実行されます。
  */
  for (i = 1; i <= 5; i+= 3) {
    printf("%d\n", i);
  }
  printf("\n");

  return 0;
}