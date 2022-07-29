#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int data[10];
	int i, j, tmp = 0;
	
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		data[i] = rand() % 100 + 1;
	}

	for (i = 0; i < 10; i++) {
		for (j = i; j < 10; j++) {
			if (data[i] < data[j]) {
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}

	printf("\n");
}