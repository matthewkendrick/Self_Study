#include <stdio.h>

int main() {
	int a;
	printf("�������͂��Ă��������F");
	scanf("%d", &a);

	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				printf("�[�N�ł�\n");
			}
			else
			{
				printf("�[�N�ł͂���܂���\n");
			}
		}
		else 
		{
			printf("�[�N�ł�\n");
		}
	}
	else 
	{
		printf("�[�N�ł͂���܂���\n");
	}
}