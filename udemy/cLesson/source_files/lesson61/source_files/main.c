#include "../header_files/student.h"
#include "student.c"
#define SIZE 4

int main(void) {
  student_data data[SIZE];
  int i;
  int id[] = {1, 2, 3, 4};
  char name[][256] = {"Anna Kendrick", "Raymond Reddington", "Matthew Kendrick", "Mike Owen"};
  int age[] = {18, 46, 26, 32};

  for (i = 0; i < SIZE; i++) {
    setData(&data[i], id[i], age[i], name[i]);
  }

  for (i = 0; i < SIZE; i++) {
    showData(&data[i]);
  }
  // return;
}