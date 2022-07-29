#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[10];
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		data[i] = rand() % 101;
		printf("%d ", data[i]);
	}

	printf("\n\n");

	printf("50ˆÈã‚Ì”F");
	for (i = 0; i < 10; i++) {
		if (data[i] >= 50) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("50–¢–‚Ì”F");
	for (i = 0; i < 10; i++) {
		if (data[i] < 50) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
}