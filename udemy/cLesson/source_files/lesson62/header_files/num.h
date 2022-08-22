#if !defined(_STUDENT_H_)
#define _STUDENT_H_

#include <stdio.h>
#include <stdlib.h>

char text[] = "に渡ってきたデータのアドレス";

typedef struct {
  int a;
  double d;
} num_data;

num_data n1 = {1, 1.2f}, n2 = {1, 1.2f};

#endif // _STUDENT_H_
