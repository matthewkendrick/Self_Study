#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[3][3];
	int i, j;

	srand((unsigned)time(NULL));

	for (i = 0; i < 3; i ++) {
		for (j = 0; j < 3; j++) {
			data[i][j] = rand() % 10;
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}
}