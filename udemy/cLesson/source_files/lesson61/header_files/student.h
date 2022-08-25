#if !defined(_STUDENT_H_)
#define _STUDENT_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

typedef struct {
  int id;
  int age;
  char name[512];
} student_data;

#endif // _STUDENT_H_