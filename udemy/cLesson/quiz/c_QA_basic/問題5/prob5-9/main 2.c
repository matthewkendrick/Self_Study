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

	printf("50以上の数：");
	for (i = 0; i < 10; i++) {
		if (data[i] >= 50) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("50未満の数：");
	for (i = 0; i < 10; i++) {
		if (data[i] < 50) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
}