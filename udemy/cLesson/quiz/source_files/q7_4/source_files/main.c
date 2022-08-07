#include "../header_files/calc.h"
#include "../header_files/showResult.h"

int main(void) {
  init(200);
  showNum();
  printf("   ↓   \n");
  add(10);
  showNum();
  printf("   ↓   \n");
  sub(300);
  showNum();
}