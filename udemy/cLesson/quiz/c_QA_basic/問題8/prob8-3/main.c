#include <stdio.h>

void main()
{
	int num, i;
	int result = 1;

	printf("数値を入力してください：");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		result = result * i;
	}

	printf("%dの階乗は%dです。\n", num, result);
}