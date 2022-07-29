#include <stdio.h>

int main(void) {
  int i, ARRAY_SIZE = 4;
  double r[] = {1.2, -1.3, 5.2, 4.8};

  printf("\n==============================\n");
  for (i = 0; i < ARRAY_SIZE; i++) {
    /*
    ① 小数点以下の操作には、以下のリンクを参照にするのが最も良いと思われます。
       ・　https://tinyurl.com/2bquyy9g
    ② 今回はprintf内で、しかも切り捨てを行なっています。その参考にしたリンクが以下です。
       ・ https://marycore.jp/prog/c-lang/format-floating-point/
    */
    printf("d[%d]=%.1lf\n", i, r[i]);
  }
  printf("==============================\n");
}