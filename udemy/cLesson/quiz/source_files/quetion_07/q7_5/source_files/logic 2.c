#include <stdlib.h>
#include <time.h>
#include "../header_files/logic.h"

int player = 0;
int computer = 0;

// 初期化
void init() {
  srand((unsigned)time(NULL));
}

// 指定した範囲の乱数を発生
void setPlayer(int num) {
  player = num;
}

void setComputer() {
  computer = rand() % 3;
}