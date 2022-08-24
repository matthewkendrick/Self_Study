#if !defined(_NUM_H_)
#define _NUM_H_

#include <stdio.h>
#include <string.h>

static char text[] = "に渡ってきたデータのアドレス";

typedef struct {
  int a;
  double d;
} num_data;

static num_data n1 = {1, 1.2f}, n2 = {1, 1.2f};

#endif // _NUM_H_