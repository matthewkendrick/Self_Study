#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[10];
	int i, max = 0, min = 10;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		data[i] = rand() % 10 + 1;
		printf("%d ", data[i]);
		if (max < data[i]) {
			max = data[i];
		}
		if (min > data[i]) {
			min = data[i];
		}
	}

	printf("\n\n");
	printf("最大値:%d\n", max);
	printf("最小値:%d\n", min);
}