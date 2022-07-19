#include <stdio.h>

// プロトタイプ宣言というものをしておくのが一般的である
float getMax(float a, float b);
void sayHi(void);

void sayHi(void) {
  printf("hi!\n");
}

int main(void) {
  float result;
  result = getMax(2.3, 5.2);
  printf("%f\n", result);

  sayHi();

  return 0;
}

float getMax(float a, float b) {
  if (a >= b) {
    return a;
  } else {
    return b;
  }
}