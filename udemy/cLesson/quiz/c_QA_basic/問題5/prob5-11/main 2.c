#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[5];
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i ++) {
		data[i] = rand() % 100 + 1;
		printf("%d ", data[i]);
	}
	printf("\n\n");

	printf("0ˆÈã60–¢–žF");
	for (i = 0; i < 5; i++) {
		if (data[i] >= 0 && data[i] < 60) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("60ˆÈã80–¢–žF");
	for (i = 0; i < 5; i++) {
		if (data[i] >= 60 && data[i] < 80) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("80ˆÈãF");
	for (i = 0; i < 5; i++) {
		if (data[i] >= 80) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
}