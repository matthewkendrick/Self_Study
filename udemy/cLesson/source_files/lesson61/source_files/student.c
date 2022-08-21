#include "../header_files/student.h"

void setData(student_data* data, int id, int age, char* name) {
  data -> id = id;
  strcpy(data -> name, name);
  data -> age = age;
}

void showData(student_data* data) {
  printf("学生番号：%d | 年齢：%d | 名前：%s", data -> id, data -> age, data -> name);
}