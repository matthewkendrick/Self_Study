#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 100 + 1;
	printf("���l�F%d\n", n);

	if (n >= 20 && n < 80) {
		printf("20�ȏ�80�����ł�\n");
	}
	else {
		printf("20�������A80�ȏ�ł�\n");
	}
}