#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;
	printf("数値：%d\n", n);

	if (n >= 5) {
		printf("5以上です。\n");
	}else{
		printf("5未満です。\n");
	}
}