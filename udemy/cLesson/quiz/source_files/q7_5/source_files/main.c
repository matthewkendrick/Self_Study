#include <stdio.h>
#include "../header_files/logic.h"
#include "../header_files/showResult.h"

int main(void) {
  int num;
  init();

  printf("じゃんけんゲーム\n");
  printf("0：グー、1：チョキ、2：パー\n");
  while (1) {
    printf("\nあなたの手は？：");
    scanf("%d", &num);
    if (num < 0 || num > 2) {
      printf("- 終了します -\n");
      break;
    } else {
      printf("\n\n");
      setPlayer(num);
      setComputer();
      Judge();
    }
  }
}