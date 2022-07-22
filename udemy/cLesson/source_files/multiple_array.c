#include <stdio.h>

int main(void) {
  /*
  このように記述することで、エクセルのような表の配列(2次元配列)を作る事ができます。
  */
  int a[3][4];
  int m, n;

  /*
  ①　以下のforループは、2次元配列に値を代入しています。
  */
  for (m = 0; m < 3; m++) {
    for (n = 0; n < 4; n++) {
      a[m][n] = m + n;
    }
  }
  
  /*
  ②　以下のforループは、成分の表示を行っています。
  */
  for (m = 0; m < 3; m++) {
    for (n = 0; n < 4; n++) {
      printf("%d ", a[m][n]);
    }
    printf("\n");
  }

  return 0;
}