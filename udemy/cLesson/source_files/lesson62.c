#include <stdio.h>

typedef struct {
  int a;
  double d;
} num_data;

void dealData_1(num_data data);
void dealData_2(num_data* pData);

int main(void) {
  num_data n1 = {1, 1.2f}, n2 = {1, 1.2f};

  printf("========================================\n");
  printf("n1のアドレス：0x%p\nn2のアドレス：0x%p\n", &n1, &n2);
  printf("----------------------------------------\n");
  dealData_1(n1);
  printf("----------------------------------------\n");
  dealData_2(&n2);
  printf("----------------------------------------\n");
  printf("n1.a = %d | n2.d = %.3f\n", n1.a, n1.d);
  printf("n2.a = %d | n2.d = %.3f\n", n2.a, n2.d);
  printf("========================================\n");
}

void dealData_1(num_data data) {
  printf("a = %d | f = %.3f\n", data.a, data.d);
  printf("dealData_1に渡ってきたデータのアドレス\n→ 0x%p\n", &data);
  data.a = 2;
  data.d = 2.4;
}

void dealData_2(num_data* pData) {
  printf("a = %d | f = %.3f\n", pData -> a, pData -> d);
  printf("dealData_2に渡ってきたデータのアドレス\n→ 0x%p\n", pData);

  pData -> a = 2;
  pData -> d = 2.4;
}