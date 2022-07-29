#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[5];
	int i, total = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i ++) {
		data[i] = rand() % 10 + 1;
		printf("%d ", data[i]);
		total += data[i];
	}

	printf("\n\n");
	printf("���v�F%d\n", total);
	printf("���ρF%d\n\n", total / 5);

	printf("���ϒl���傫�����F");
	for (i = 0; i < 5; i++) {
		if (data[i] > total / 5) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("���ϒl��菬�������F");
	for (i = 0; i < 5; i++) {
		if (data[i] < total / 5) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
}