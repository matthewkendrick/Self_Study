#include "showResult.h"
#include <stdio.h>

char result[3][256] = {"グー", "チョキ", "パー"};
extern int player;
extern int computer;

void Judge()
{
	printf("プレイヤー:%s\n", result[player]);
	printf("コンピューター:%s\n", result[computer]);
	if ((player == 0 && computer == 1)
		|| (player == 1 && computer == 2)
		|| (player == 2 && computer == 0)) {
		printf("プレイヤーの勝ち\n");
	} else if ((player == 1 && computer == 0)
		|| (player == 2 && computer == 1)
		|| (player == 0 && computer == 2)) {
		printf("コンピュータの勝ち\n");
	} else {
		printf("あいこです。\n");
	}
}