#include <stdio.h>

void numJudge(int);

void main() {
	int a;
	printf("数値を入力してください：");
	scanf("%d", &a);
	numJudge(a);
}

void numJudge(int n1) {
	if (n1 == 0) {
		printf("0です\n");
	}
	else if (n1 % 2 == 0)
	{
		printf("偶数です\n");
	}
	else
	{
		printf("奇数です\n");
	}
}