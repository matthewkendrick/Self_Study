#include "../header_files/studentDatabase.h"
#include <string.h>

#define MESSAGE_LENGTH 256

static student student_database[MAX_LENGTH];
static student = student_database[MAX_LENGTH];
int Error = MESSAGE_OK;

void initDatabase() {
  int i;
  for (i = 0; i < MAX_STUDENT; i++) {
    student_database[i].id = -1;
    strcpy(student_database[i].name, "");
  }
  Error = MESSAGE_OK;
  num = 0;
}

int add(int id, char* name) {
  if (get(id) == NULL && num < MAX_STUDENT) {
    student_database[num].id = id;
    strcpy(student_database[num].name, name);
    num++;
    Error= MESSAGE_OK;
    return 1;
  }
  Error = MESSAGE_ERROR;
  return 0;
}

student* get(int id) {
  int i;
  for (i = 0; i < num; i++) {
    if (student_database[i].id == id) {
      return &student_database[i];
    }
  }
  return NULL;
}