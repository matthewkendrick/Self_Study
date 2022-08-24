#include "../header_files/num.h"
#include "num.c"

int main(void) {
  printf("========================================\n");
  printf("n1のアドレス | 0x%p\nn2のアドレス | 0x%p\n", &n1, &n2);
  printf("----------------------------------------\n");
  dealData_1(n1);
  printf("----------------------------------------\n");
  dealData_2(&n2);
  printf("----------------------------------------\n");
  printf("n1.a = %d | n2.d = %.3f\n", n1.a, n1.d);
  printf("n2.a = %d | n2.d = %.3f\n", n1.a, n1.d);
  printf("========================================\n");
}