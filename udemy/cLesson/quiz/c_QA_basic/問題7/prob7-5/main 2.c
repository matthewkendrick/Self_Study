#include "logic.h"
#include "showResult.h"
#include <stdio.h>

void main()
{
	int num;
	init();
	printf("����񂯂�Q�[��\n");
	printf("0:�O�[�A1:�`���L�A2�F�p�[\n");
	while (1)
	{
		printf("���Ȃ��̎�́H(0-2):");
		scanf("%d", &num);
		if (num < 0 || num > 2) {
			printf("�I�����܂�\n");
			break;
		} else {
			setPlayer(num);
			setComputer();
			Judge();
		}
	}
}