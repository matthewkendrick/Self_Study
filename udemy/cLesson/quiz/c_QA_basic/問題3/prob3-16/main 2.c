#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 100 + 1;
	printf("���l�F%d\n", n);

	if (n % 2 == 0 && n % 3 == 0) {
		printf("2��3�̌��{���ł��B\n");
	}
	else if (n % 2 == 0) {
		printf("2�̔{���ł��B\n");
	}
	else if (n % 3 == 0) {
		printf("3�̔{���ł��B\n");
	}
}