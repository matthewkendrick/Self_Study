#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 21 - 10;
	printf("数値：%d\n", n);

	if (n == 0) {
		printf("0です\n");
	}
	else if(n < 0) {
		printf("負の数です\n");
	}
	else {
		printf("正の数です\n");
	}
}