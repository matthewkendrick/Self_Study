#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int data[10], odd[10], even[10];
	int i;

	srand((unsigned)time(NULL));
	
	for (i = 0; i < 10; i++) {
		data[i] = rand() % 100 + 1;
		printf("%d ", data[i]);
		if (data[i] % 2 == 0) {
			even[i] = data[i];
			odd[i] = 0;
		} else {
			odd[i] = data[i];
			even[i] = 0;
		}
	}

	printf("\n");
	printf("‹ô”F");
	for (i = 0; i < 10; i++) {
		if (even[i] != 0) {
			printf("%d ", even[i]);
		}
	}

	printf("\n");
	printf("Šï”F");
	for (i = 0; i < 10; i++) {
		if (odd[i] != 0) {
			printf("%d ", odd[i]);
		}
	}

	printf("\n");
}