#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 45 - 10 + 1;
	printf("�ێ�%d�x\n", n);

	if (n >= 30) {
		printf("�^�ē��ł��B");
	}
	else if (n >= 25 && n < 30) {
		printf("�ē��ł��B");
	}
	else if (n < 0) {
		printf("�^�~���ł��B");
	}
}