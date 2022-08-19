#include <stdio.h>

int main(void) {
  int a = 100;
  double b = 123.4;
  float c = 123.4f;
  char d = 'a';

  char text_1[] = "の値は";
  char text_2[] = "大きさは";
  char text_3[] = "アドレスは";

  printf("==============================\n");  
  printf("a%s%d、\n%s %lu byte、\n%s0x%p\n", text_1, a, text_2, sizeof(int), text_3, &a);
  printf("------------------------------\n");
  printf("b%s%f、\n%s %lu byte、\n%s0x%p\n", text_1, b, text_2, sizeof(double), text_3, &b);
  printf("------------------------------\n");
  printf("c%s%f、\n%s %lu byte、\n%s0x%p\n", text_1, c, text_2, sizeof(float), text_3, &c);
  printf("------------------------------\n");
  printf("d%s%c、\n%s %lu byte、\n%s0x%p\n", text_1, d, text_2, sizeof(char), text_3, &d);
  printf("==============================\n");
}