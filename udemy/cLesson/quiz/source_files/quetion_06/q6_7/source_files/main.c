#include "../header_files/calc.h"

int main(void) {
  result1 = circumference(radius);
  result2 = area(radius);

  printf("==============================\n");
  printf("円の半径を入力してください\n→ ");
  scanf("%lf", &radius);
  printf("円周：%.2lf\n", result1);
  printf("面積：%.2lf\n", result2);
  printf("==============================\n");
}