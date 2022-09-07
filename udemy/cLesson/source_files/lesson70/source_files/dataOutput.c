#include "dataOutput.h"
#include <stdio.h>

extern int Error;

void showStudentData(student* data) {
  if (data != NULL) {
    printf("学生番号：%d\n名　　前：%s\n", data->id, data->name);
  } else {
    printf("データが登録されていません。\n");
  }
}

void showError() {
  switch (Error) {
  case MESSAGE_OK:
    printf("OK!\n");
    break;
  case MESSAGE_ERROR:
    printf("ERROR...\n");
    break;
  }
}