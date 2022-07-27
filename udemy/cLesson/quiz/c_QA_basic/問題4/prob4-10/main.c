#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int n, i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++) {
		n = rand() % 100 + 1;
		printf("%d\n", n);
	}
}