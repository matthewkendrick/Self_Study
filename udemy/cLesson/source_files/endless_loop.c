#include <stdio.h>

int main(void) {
  int num;
  printf("負の値で、ループから抜けます。\n");
  while (1) { //( 1 )という記述は無限ループを実装するものだと考えて良いかと思います。
    printf("数値を入力してください → ");
    scanf("%d", &num);
    if (num < 0) {
      break;
    }
  }
  
  printf("\n終了しました。\n");

  return 0;
}