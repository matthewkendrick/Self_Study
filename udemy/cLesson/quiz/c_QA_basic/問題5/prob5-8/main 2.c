#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[5];
	int i, large = 0, small = 0, zero = 0;
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++) {
		data[i] = rand() % 21 - 10;

		printf("%d ", data[i]);
		if (data[i] > 0) {
			large++;
		}
		else if (data[i] < 0)
		{
			small++;
		}
		else
		{
			zero++;
		}
	}

	printf("\n");

	printf("0より大きい数:%d個\n", large);
	printf("0より小さい数:%d個\n", small);
	printf("0の個数数:%d個\n", zero);
}