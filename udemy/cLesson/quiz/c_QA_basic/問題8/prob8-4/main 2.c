#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int num, result = 0;
	srand((unsigned)time(NULL));

	num = rand() % 1000 + 1;

	printf("%d�̌�����", num);
	while (num != 0)
	{
		num = num / 10;
		result++;
	}

	printf("%d�ł��B\n", result);
}