#include "../header_files/student.h"
#include "student.c"

int main(void) {
  struct student data;

  printf("============================================================\n");
  data. id = 1;
  strcpy(data.name, "Anna Kendrick");
  data. age = 18;
  data. grade = 3;
  printf("学生番号：%d | 学年：%d | 名前：%s | 年齢：%d", data.id, data.grade, data.name, data.age);
  printf("\n");

  data. id = 2;
  strcpy(data.name, "Matthew Kendrick");
  data. age = 24;
  data. grade = 2;

  printf("学生番号：%d | 学年：%d | 名前：%s | 年齢：%d", data.id, data.grade, data.name, data.age);
  printf("\n");
  printf("============================================================\n");
}