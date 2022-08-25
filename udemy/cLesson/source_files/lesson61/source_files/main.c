#include "../header_files/student.h"
#include "student.c"

int main(void) {
  srand((unsigned)time(NULL));
  int rand_max = 10000, rand_min = 1000;
  student_data data[SIZE];
  int i;
  int id[] = {rand() % rand_max + rand_min, rand() % rand_max + rand_min, rand() % rand_max + rand_min, rand() % rand_max + rand_min};
  int age[] = {18, 24, 32, 21};
  char name[][512] = {"Anna Kendrick", "Ryan Hansen", "Matthew Kendrick", "Jessica Jones"};

  for (i = 0; i < SIZE; i++) {
    setData(&data[i], id[i], age[i], name[i]);
  }

  printf("==================================================\n");
  for (i = 0; i < SIZE; i++) {
    showData(&data[i]);
  }
  printf("==================================================\n");
}