#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 100 + 1;

	if (n <= 50 && n % 2 == 0) {
		printf("50�ȉ��̋����ł��B\n");
	}
	else if (n <= 50) {
		printf("50�ȉ��ł��B\n");
	}
	else if (n % 2 == 0) {
		printf("�����ł��B\n");
	}
}