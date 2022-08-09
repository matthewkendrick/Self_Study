#include "../header_files/calc.h"

int main(void) {
  int a, b;
  int result_add;
  int result_sub;

  printf("==============================\n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("\n");

  result_add = add(a, b);
  result_sub = sub(a, b);

  printf("%d + %d = %d", a, b, result_add);
  printf("\n");
  printf("%d - %d = %d", a, b, result_sub);

  printf("\n");
  printf("==============================\n");
}