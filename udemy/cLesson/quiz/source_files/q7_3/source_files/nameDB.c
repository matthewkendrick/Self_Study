#include "../header_files/nameDB.h"

// データの初期化
void init() {
  int i;
  for (i = 0; i < 10; i++) {
    strcpy(names[i], "");
  }
}

// 生徒の名前の設定
void setName(int num, char* name) {
  if (num >= 0 && num < 10) {
    strcpy(names[num], name);
  }
}

// 生徒の名前の表示
void showName(int num) {
  printf("%d：%s\n", num, names[num]);
}