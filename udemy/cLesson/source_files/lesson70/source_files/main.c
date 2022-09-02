#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENT 10
#define LENGTH 50
#define MESSAGE_LENGTH 256

enum ERROR {
  MESSAGE_OK,
  MESSAGE_ERROR
};

typedef struct {
  int id;
} student;

int num = 0;
student student_database[MAX_STUDENT];
int Error;

void initDatabase();
int add(int, char*);
student* get(int);
void showStudentData(student*);
void showError();

int main(void) {
  int i;
  char names[][LENGTH] = {"Anna Kendrick", "Sean Ash", "Gareth Nolan", "Matthew Kendrick"};
  int ids[] = {1, 2, 3, 4};
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