#include "../header_files/student.h"
#include "student.c"

int main(void) {
  int data_size = 5;
  int i;

  printf("==================================================\n");
  student_data data[] = {
    {1, "Anna Kendrick", 18},
    {2, "Raymond Reddington", 56},
    {3, "Matthew Kendrick", 32},
    {4, "Anthony Ryan", 24},
    {5, "Chris Johnson", 48},
  };
  for (i = 0; i < data_size; i++) {
    printf("学生番号：%d | 年齢：%d | 名前：%s\n", data[i].id, data[i].age, data[i].name);
  }
  printf("==================================================\n");
}