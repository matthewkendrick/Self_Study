#include <stdio.h>
#include <math.h>

void main()
{
	int data[100];
	int i, j;

	for (i = 0; i < 100; i++) {
		data[i] = 1;
	}

	for (i = 2; i < sqrt(100); i++) {
		if (data[i]) {
			for (j = 0; i * (j + 2) < 100; j++) {
				data[i * (j + 2)] = 0;
			}
		}
	}

	for (i = 2; i < 100; i++) {
		if (data[i]) {
			printf("%d\n", i);
		}
	}
}