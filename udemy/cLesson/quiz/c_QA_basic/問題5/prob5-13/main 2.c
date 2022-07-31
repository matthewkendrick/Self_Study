#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[3][3];
	int i, j, max = 0, min = 9;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			data[i][j] = rand() % 10;
			printf("%d ", data[i][j]);

			if (data[i][j] > max) {
				max = data[i][j];
			}

			if (data[i][j] < min) {
				min = data[i][j];
			}
		}
		printf("\n");
	}
	printf("\n");

	printf("最大値：%d\n", max);
	printf("最小値：%d\n", min);
}