#include "showResult.h"
#include <stdio.h>

char result[3][256] = {"�O�[", "�`���L", "�p�["};
extern int player;
extern int computer;

void Judge()
{
	printf("�v���C���[:%s\n", result[player]);
	printf("�R���s���[�^�[:%s\n", result[computer]);
	if ((player == 0 && computer == 1)
		|| (player == 1 && computer == 2)
		|| (player == 2 && computer == 0)) {
		printf("�v���C���[�̏���\n");
	} else if ((player == 1 && computer == 0)
		|| (player == 2 && computer == 1)
		|| (player == 0 && computer == 2)) {
		printf("�R���s���[�^�̏���\n");
	} else {
		printf("�������ł��B\n");
	}
}