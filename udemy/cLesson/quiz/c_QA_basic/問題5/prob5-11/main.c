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

	printf("0�ȏ�60�����F");
	for (i = 0; i < 5; i++) {
		if (data[i] >= 0 && data[i] < 60) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("60�ȏ�80�����F");
	for (i = 0; i < 5; i++) {
		if (data[i] >= 60 && data[i] < 80) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
	printf("80�ȏ�F");
	for (i = 0; i < 5; i++) {
		if (data[i] >= 80) {
			printf("%d ", data[i]);
		}
	}

	printf("\n");
}