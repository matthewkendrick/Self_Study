#include <stdio.h>

int get_absolute(int);

void main() {
	int n, result;
	printf("数値を入力してください:");
	scanf("%d", &n);
	result = get_absolute(n);

	printf("%d\n", result);
}

int get_absolute(int n) {
	if (n >= 0) {
		return n;
	}
	else
	{
		return n * -1;
	}
}