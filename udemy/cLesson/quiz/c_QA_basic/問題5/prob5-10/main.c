#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[5];
	int i, j;

	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++) {
		data[i] = rand() % 10 + 1;
		printf("%d ", data[i]);
	}

	printf("\n\n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < data[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
}