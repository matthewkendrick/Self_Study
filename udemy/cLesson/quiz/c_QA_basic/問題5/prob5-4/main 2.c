#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[10];
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		data[i] = rand() % 10 + 1;
		printf("%d ", data[i]);
	}

	printf("\n\n");

	printf("5ˆÈã‚Ì” :");
	for (i = 0; i < 10; i++) {
		if (data[i] >= 5) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("5–¢–‚Ì”:");
	for (i = 0; i < 10; i++) {
		if (data[i] < 5) {
			printf("%d ", data[i]);
		}
	}
	printf("\n");
}