#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 45 - 10 + 1;
	printf("摂氏%d度\n", n);

	if (n >= 30) {
		printf("真夏日です。");
	}
	else if (n >= 25 && n < 30) {
		printf("夏日です。");
	}
	else if (n < 0) {
		printf("真冬日です。");
	}
}