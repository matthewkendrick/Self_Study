#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 6 + 1;
	printf("���l�F%d\n", n);
	if (n >= 3) {
		printf("3�ȏ�ł��B\n");
	}
}