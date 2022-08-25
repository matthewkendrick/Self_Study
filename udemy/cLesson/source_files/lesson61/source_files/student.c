#include "../header_files/student.h"

static void setData(student_data* data, int id, int age, char* name) {
  data -> id = id;
  strcpy(data -> name, name);
  data -> age = age;
}

static void showData(student_data* data) {
  printf("学生番号：%d | 年齢：%d | 名前：%s\n", data -> id, data -> age, data -> name);
}