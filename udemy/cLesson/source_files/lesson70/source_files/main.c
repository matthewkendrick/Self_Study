#include <stdio.h>
#include "studentDatabase.h"
#include "detaOutput.h"

void main() {
  int i;
  char names[][LENGTH] = {"Anna Kendrick", "Jeremy Renner", "Rose Byrne", "Matthew Kendrick"};
  int ids[] = {1, 2, 2, 3};
  initDatabase();
  for (i = 0; i < 4; i++) {
    add(ids[i], names[i]);
    printf("登録：%d %s\n", ids[i], names[i]);
    showError();
  }
  for (i = 0; i < 3; i++) {
    showStudentData(get(i+1));
  }
}