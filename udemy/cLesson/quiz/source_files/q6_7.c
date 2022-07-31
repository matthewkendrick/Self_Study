#include <stdio.h>
#include <math.h>

double circumference(double);
double area(double);

int main(void) {
  double radius, result1, result2;
  result1 = circumference(radius);
  result2 = area(radius);

  printf("==============================\n");
  printf("円の半径を入力してください\n→ ");
  scanf("%lf", &radius);
  printf("円周：%.2lf\n", result1);
  printf("面積：%.2lf\n", result2);
  printf("==============================\n");
}

double circumference(double radius) {
  return (radius * 2) * M_PI;
}

double area(double radius) {
  return radius * radius * M_PI;
}