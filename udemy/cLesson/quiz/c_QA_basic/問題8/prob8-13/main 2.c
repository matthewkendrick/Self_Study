#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int data1[10], data2[10], data3[10], data4[10];
	int i, j, val, val2;
	srand((unsigned)time(NULL));

	printf("配列1：");
	for (i = 0; i < 10; i++) {
		data1[i] = rand() % 10 + 1;
		printf("%d ", data1[i]);
	}

	printf("\n");
	printf("配列2：");
	for (i = 0; i < 10; i++) {
		data2[i] = rand() % 10 + 1;
		printf("%d ", data2[i]);
	}

	for (i = 0; i < 10; i++) {
		val = 0;
		val2 = 0;
		for (j = 0; j < 10; j++) {
			if (data1[j] == i + 1) {
				val = 1;
				break;
			}
		}

		for (j = 0; j < 10; j++) {
			if (data2[j] == i + 1) {
				val2 = 1;
				break;
			}
		}

		if (val == 1 && val2 == 1) {
			data3[i] = i + 1;
			data4[i] = 0;
		} else if(val == 0 && val2 == 0){
			data4[i] = 0;
			data3[i] = 0;
		} else {
			data4[i] = i + 1;
			data3[i] = 0;
		}
	}

	printf("\n");
	printf("共通の数");
	for (i = 0; i < 10; i++) {
		if (data3[i] != 0) {
			printf("%d ", data3[i]);
		}
	}

	printf("\n");
	printf("どちらか入っている数");
	for (i = 0; i < 10; i++) {
		if (data4[i] != 0) {
			printf("%d ", data4[i]);
		}
	}

	printf("\n");
}