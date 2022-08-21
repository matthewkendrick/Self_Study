#include <stdio.h>
#include <string.h>
#define SIZE 4

typedef struct {
  int id;
  int age;
  char name[512];
} student_data;

void setData(student_data*, int, int, char*);
void showData(student_data*);

int main(void) {
  student_data data[SIZE];
  int i;
  int id[] = {1, 2, 3, 4};
  int age[] = {18, 24, 32, 21};
  char name[][256] = {"Anna Kendrick", "Matthew Kendrick", "Jessica Jones", "Ryan Hansen"};

  for (i = 0; i < SIZE; i++) {
    setData(&data[i], id[i], age[i], name[i]);
  }

  printf("==================================================\n");
  for (i = 0; i < SIZE; i++) {
    showData(&data[i]);
  }
  printf("==================================================\n");
  // return;
}

void setData(student_data* data, int id, int age, char* name) {
  data -> id = id;
  strcpy(data -> name, name);
  data -> age = age;
}

void showData(student_data* data) {
  printf("学生番号：%d | 年齢：%d | 名前：%s\n", data -> id, data -> age, data -> name);
}