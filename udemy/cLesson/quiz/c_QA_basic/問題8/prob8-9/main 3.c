#include <stdio.h>

void main()
{
	int i, j, num;

	for (i = 1; i <= 10000; i++) {
		num = 0;

		for (j = 1; j < i; j++) {
			if ((i % j) == 0) {
				num += j;
			}
		}

		if (j == num) {
			printf("%d\n", j);
		}
	}
}