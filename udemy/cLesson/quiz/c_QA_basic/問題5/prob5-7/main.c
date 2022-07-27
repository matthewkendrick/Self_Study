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
	printf("合計：%d\n", total);
	printf("平均：%d\n\n", total / 5);

	printf("平均値より大きい数：");
	for (i = 0; i < 5; i++) {
		if (data[i] > total / 5) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("平均値より小さい数：");
	for (i = 0; i < 5; i++) {
		if (data[i] < total / 5) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
}