#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int min = 100;
	int n, i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++) {
		n = rand() % 100 + 1;
		printf("%d\n", n);

		if (n < min) {
			min = n;
		}
	}

	printf("Å¬’lF%d\n", min);
}