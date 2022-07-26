/*
①　 stdlib.hはライブラリの読み込みを行なっています。
② time.hは時間を取得するものですがここではsrandを使用する際に、
   可能な限り与えられる数をランダムにするために読み込んでいます。
③ 11行目(srand)は上記の件を踏まえて初期化しています。
   ランダムな数を取得するにはこの記述をすればいいと考えておいて良いでしょう。
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int a;
  int b;
  srand((unsigned)time(NULL));

  a = rand() % 10 + 1;
  b = rand() % 10 + 1;

  printf("--------------------\n");
  printf("%d + %d = %d\n", a, b, a + b);
  printf("--------------------\n");
}