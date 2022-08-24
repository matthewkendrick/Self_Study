#include "../header_files/num.h"

static void dealData_1(num_data data) {
  printf("n1.a = %d | n2.d = %.3f\n", n1.a, n1.d);
  printf("dealData_1%s\n → 0x%p\n", text, &data);

  data.a = 2;
  data.d = 2.4;
}

static void dealData_2(num_data* pData) {
  printf("a = %d | f = %.3f\n", pData -> a, pData -> d);
  printf("dealData_2%s\n → 0x%p\n", text, pData);
  pData -> a = 2;
  pData -> d = 2.4;
}