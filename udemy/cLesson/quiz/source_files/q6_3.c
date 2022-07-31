#include <stdio.h>

double triangle(double, double);

int main(void) {
  double height, bottom;
  double result;

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

double triangle(double height, double bottom) {
  return bottom * height / 2;
}