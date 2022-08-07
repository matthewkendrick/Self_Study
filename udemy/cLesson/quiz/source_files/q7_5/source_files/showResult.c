#include <stdio.h>
#include "../header_files/showResult.h"

char results[3][16] = {"グー", "チョキ", "パー"};
extern int player;
extern int computer;

void Judge() {
  printf("プレイヤー：%s\n", results[player]);
  printf("コンピュータ：%s\n", results[computer]);
  if (
       (player == 0 && computer == 1)
    || (player == 1 && computer == 2)
    || (player == 2 && computer == 0)
    ) {
      printf("プレイヤーの勝ち！\n");
  } else if (
       (player == 1 && computer == 0)
    || (player == 2 && computer == 1)
    || (player == 0 && computer == 2)
    ) {
      printf("コンピュータの勝ち...\n");
  } else {
    printf("あいこです。\n");
  }
}