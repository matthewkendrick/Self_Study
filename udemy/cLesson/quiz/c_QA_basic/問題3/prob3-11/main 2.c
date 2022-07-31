#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 100 + 1;
	printf("”’lF%d\n", n);

	if (n >= 20 && n < 80) {
		printf("20ˆÈã80–¢–ž‚Å‚·\n");
	}
	else {
		printf("20–¢–ž‚©A80ˆÈã‚Å‚·\n");
	}
}