#include <stdio.h>

void numJudge(int);

void main() {
	int a;
	printf("���l����͂��Ă��������F");
	scanf("%d", &a);
	numJudge(a);
}

void numJudge(int n1) {
	if (n1 == 0) {
		printf("0�ł�\n");
	}
	else if (n1 % 2 == 0)
	{
		printf("�����ł�\n");
	}
	else
	{
		printf("��ł�\n");
	}
}