#if !defined(_STUDENT_H_)
#define _STUDENT_H_

#include <stdio.h>
#include <string.h>

typedef struct {
  int id;
  char name[256];
  int age;
} student_data;

void setData(student_data*, int, int, char*);
void showData(student_data*);

#endif // _STUDENT_H_
