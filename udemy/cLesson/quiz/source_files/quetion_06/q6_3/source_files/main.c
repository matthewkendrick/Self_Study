#include "../header_files/calc.h"

int main(void) {
  printf("==============================\n");
  printf("高さ： ");
  scanf("%lf", &height);

  printf("底辺： ");
  scanf("%lf", &bottom);
  printf("\n");

  result = triangle(height, bottom);
  printf("面積： %.2lf", result);
  printf("\n");
  printf("==============================\n");
}