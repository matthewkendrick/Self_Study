#include <stdio.h>

void main()
{
	int num, i;
	int result = 1;

	printf("���l����͂��Ă��������F");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		result = result * i;
	}

	printf("%d�̊K���%d�ł��B\n", num, result);
}